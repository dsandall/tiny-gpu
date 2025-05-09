import pygame
import asyncio
import numpy as np

WIDTH, HEIGHT = 320, 320
BUFFW, BUFFH = 16, 16
SCALE = WIDTH // BUFFW  # 20


async def update_display(screen, buff=None):
    # Use provided buffer or generate a random one
    if buff is None:
        # buffer = np.random.randint(0, 256, (BUFFH, BUFFW), dtype=np.uint8)
        exit(1)
    else:
        assert len(buff) == BUFFH * BUFFW, "Buffer must be 256 bytes"
        buffer = np.array(buff, dtype=np.uint8).reshape((BUFFH, BUFFW))

    # Scale to 320x320
    scaled = np.repeat(np.repeat(buffer, SCALE, axis=0), SCALE, axis=1)

    # Convert to RGB
    rgb = np.stack([scaled] * 3, axis=-1)

    # Display on screen
    surface = pygame.surfarray.make_surface(rgb.swapaxes(0, 1))
    screen.blit(surface, (0, 0))
    pygame.display.flip()

    # await asyncio.sleep(0.033)  # ~30 FPS


def init_window():
    pygame.init()
    pygame.display.set_caption("Async Greyscale Buffer Window")
    screen = pygame.display.set_mode((WIDTH, HEIGHT))
    return screen


def run_window():
    screen = init_window()
    # once initialized, await the update func or run it as standalone async runtime
    asyncio.run(update_display(screen))


if __name__ == "__main__":
    run_window()
