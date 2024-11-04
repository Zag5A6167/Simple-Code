import pygame
import sys
from pygame import mixer
pygame.init()
mixer.init()

mixer.music.load("pop.mp3")
screen_width = 500
screen_height = 500
screen = pygame.display.set_mode((screen_width,screen_height))
pygame.display.set_caption("game")

BLACK = (0,0,0)
WHITE = (255,255,255)
centerX = screen_width // 2
centerY = screen_height // 2
clock  = pygame.time.Clock()
FPS = 60

class  Ball:
    def __init__(self, x, y, radius, color):
        self.x = x
        self.y = y
        self.speedX = 0.1
        self.speedY = 0.1
        self.speedX_change = 0.01
        self.speedY_change = 0.01
        self.radius = radius
        self.color = color

    def draw(self):
        pygame.draw.circle(screen, self.color, (self.x, self.y), self.radius)

    def move(self):
        self.speedY_change += 0.001
        self.speedY += self.speedY_change
        self.y += self.speedY
        if self.y >= screen_height - self.radius:
            self.speedY = -abs(self.speedY)
            mixer.music.play()
       

myBall = Ball(centerX,0,20,WHITE)
running = True
while True:
    
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
            exit()


    screen.fill(BLACK)

    myBall.draw()
    myBall.move()



    pygame.display.update()
        
    clock.tick(FPS)

pygame.quit()