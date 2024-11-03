import pygame
import random
import math

pygame.init()


screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("Snow")

class Circle:
    def __init__(self):
        self.x = random.randint(0, 800)
        self.y = 0
        self.radius = 3
        self.speed = random.uniform(0.02, 0.05)
    def draw(self):
        pygame.draw.circle(screen, (255, 255, 255), (self.x, self.y), self.radius)

    def update(self):
        self.y += 1
        return self.y > 600
circles = []

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    screen.fill((30, 30, 30))

    while len(circles) < 100:
        circles.append(Circle())

    for circle in circles:
        circle.draw()
        circle.update()
        if circle.update():
            circles.remove(circle)


    pygame.display.flip()

pygame.quit()