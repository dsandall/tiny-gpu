import seaborn as sns
import matplotlib.patches as mpatches
import os
import pandas as pd
import matplotlib.pyplot as plt
import re
import sys


def parse_test_summary(file_contents):
    summary_start = re.search(r"\*{90,}", file_contents)
    if not summary_start:
        return []

    summary = file_contents[summary_start.start():]
    pattern = re.compile(
        r"\*\* (?P<name>[\w\.\_]+)\s+(?P<status>PASS|FAIL|SKIP)\s+"
        r"(?P<sim_time>[\d\.]+)"
    )

    results = []
    for match in pattern.finditer(summary):
        test_name = match.group("name")
        status = match.group("status")
        sim_time = float(match.group("sim_time"))
        results.append({
            "name": test_name,
            "status": status,
            "sim_time": sim_time
        })
    return results


def parse_filename(filename):
    base = os.path.basename(filename)

    # Match with delay: test_all_<delay>_delay_<hw_config>.log
    m = re.match(r"test_all_(\d+)_delay_(.+?)\.log", base)
    if m:
        delay = int(m.group(1))
        hw_config = m.group(2)
        return hw_config, delay

    # Match without delay: test_all_<hw_config>.log
    m = re.match(r"test_all_(.+?)\.log", base)
    if m:
        hw_config = m.group(1)
        return hw_config, 1

    return "unknown", -1


def parse_files(file_list):
    records = []
    for filename in file_list:
        with open(filename, "r") as f:
            contents = f.read()
        hw_config, delay = parse_filename(filename)
        for result in parse_test_summary(contents):
            result["hw_config"] = hw_config
            result["delay"] = delay
            records.append(result)
    return pd.DataFrame(records)


def _highlight_failures(ax, df):
    for patch, (_, row) in zip(ax.patches, df.iterrows()):
        if row["status"] == "FAIL":
            patch.set_color("red")


def _setup_plot(title):
    plt.figure(figsize=(16, 8))
    ax = plt.gca()
    ax.set_title(title)
    ax.set_ylabel("Simulation Time")
    ax.set_xlabel("Test Name")
    plt.xticks(rotation=45, ha="right")
    return ax


def _finalize_plot(ax, output_path):
    ax.legend(title="HW Config", bbox_to_anchor=(1.05, 1), loc="upper left")
    plt.tight_layout()
    plt.savefig(output_path)
    plt.close()


def plot_sim_times(df, output_dir="../test/results/plots"):
    os.makedirs(output_dir, exist_ok=True)
    delays = sorted(df["delay"].unique())

    for delay in delays:
        df_curr = df[df["delay"] == delay]
        ax = _setup_plot(f"Simulation Time by Test (Delay {delay})")

        sns.barplot(
            data=df_curr,
            x="name",
            y="sim_time",
            hue="hw_config",
            ci=None,
            dodge=True,
            ax=ax
        )
        _highlight_failures(ax, df_curr)

        out_path = os.path.join(output_dir, f"sim_times_delay{delay}.png")
        _finalize_plot(ax, out_path)


def plot_sim_times_overlay(df, output_dir="../test/results/plots"):
    os.makedirs(output_dir, exist_ok=True)
    delays = sorted(df["delay"].unique())

    for i in range(1, len(delays)):
        delay = delays[i]
        prev_delay = delays[i - 1]

        df_curr = df[df["delay"] == delay]
        df_prev = df[df["delay"] == prev_delay]

        ax = _setup_plot(f"Simulation Time by Test (Delay {
                         delay}, Overlay: {prev_delay})")

        # Current data — plotted first (in the back)
        sns.barplot(
            data=df_curr,
            x="name",
            y="sim_time",
            hue="hw_config",
            ci=None,
            dodge=True,
            ax=ax
        )
        _highlight_failures(ax, df_curr)

        # Overlay previous delay — plotted second (on top)
        sns.barplot(
            data=df_prev,
            x="name",
            y="sim_time",
            hue="hw_config",
            ci=None,
            palette="light:#999999",
            dodge=True,
            ax=ax,
            alpha=0.3
        )

        out_path = os.path.join(output_dir, f"sim_times_overlay_delay{
                                delay}_vs_{prev_delay}.png")
        _finalize_plot(ax, out_path)


if __name__ == "__main__":
    file_list = sys.argv[1:]
    if not file_list:
        print("Usage: python plot_sim_times.py <logfile1> <logfile2> ...")
        sys.exit(1)

    df = parse_files(file_list)

    print(df)
    if df.empty:
        print("No valid test results found.")
        sys.exit(1)

    plot_sim_times(df)
    plot_sim_times_overlay(df)
