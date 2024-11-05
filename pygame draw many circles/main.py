import pygame
import random
from pygame import mixer
pygame.init()


screen = pygame.display.set_mode((800, 600))
pygame.display.set_caption("game")


class Circle:
    def __init__(self,x,y,radius,color):
        self.x = x 
        self.y = random.randint(0,600)
        self.radius = radius
        self.color = color
        

    def draw(self,screen):
        pygame.draw.circle(screen,self.color,(self.x,self.y),self.radius)
    def move(self,x):
        self.x += x 

clock = pygame.time.Clock()

circles = []



while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()

    screen.fill((30,30,30))
   
    for i in range(10):
        circle = Circle(0,random.randint(0,600),10,(255,255,255))
        circles.append(circle)

    for circle in circles:
       
        circle.draw(screen)
        circle.move(1)
        
    pygame.display.flip()
    
    
    
    clock.tick(60)


pygame.quit()
