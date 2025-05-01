import pygame
import asyncio
import numpy as np

WIDTH, HEIGHT = 320, 320
BUFFW, BUFFH = 16, 16
SCALE = WIDTH // BUFFW  # 20


async def update_display(screen):
    while True:
        # Generate 16x16 grayscale buffer
        buffer = np.random.randint(0, 256, (BUFFH, BUFFW), dtype=np.uint8)

        # Expand buffer to 320x320 by repeating each value into 20x20 blocks
        scaled = np.repeat(np.repeat(buffer, SCALE, axis=0), SCALE, axis=1)

        # Convert to 3-channel RGB
        rgb = np.stack([scaled] * 3, axis=-1)  # shape: (320, 320, 3)

        # Make surface and display
        surface = pygame.surfarray.make_surface(
            rgb.swapaxes(0, 1))  # Pygame wants (width, height)
        screen.blit(surface, (0, 0))
        pygame.display.flip()

        await asyncio.sleep(0.033)  # ~30 FPS


def run_window():
    pygame.init()
    screen = pygame.display.set_mode((WIDTH, HEIGHT))
    pygame.display.set_caption("Async Greyscale Buffer Window")

    loop = asyncio.get_event_loop()

    async def main():
        display_task = asyncio.create_task(update_display(screen))

        while True:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    loop.stop()
                    return
            await asyncio.sleep(0.01)

    loop.run_until_complete(main())


if __name__ == "__main__":
    run_window()
