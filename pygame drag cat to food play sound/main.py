import pygame
from pygame import mixer

def main():
   
    pygame.init()
    mixer.init()
    
    mixer.music.load("cat.mp3")
    
    width, height = 800, 600
    screen = pygame.display.set_mode((width, height))
    pygame.display.set_caption("Rectangle")


    myCat = pygame.image.load("cat.jpg")
    myCat = pygame.transform.scale(myCat,(100,100))

    food = pygame.image.load("food.jpg")
    food = pygame.transform.scale(food,(100,100))

    food_rect = food.get_rect()
    food_rect.x = width - 200
    food_rect.y = height - 200
    
    is_collision = False
    Myrect = pygame.Rect(100,100,100,100)
    dragging = False 
    offsetX = 0
    offsetY = 0

    running = True
    while running:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                running = False
            elif event.type == pygame.MOUSEBUTTONDOWN:
                if Myrect.collidepoint(event.pos):
                    dragging = True
                    mouseX, mouseY = event.pos
                    offsetX = mouseX - Myrect.x
                    offsetY = mouseY - Myrect.y
            elif event.type == pygame.MOUSEBUTTONUP:    
                dragging = False
            elif event.type == pygame.MOUSEMOTION:    
                if dragging:
                    mouseX, mouseY = event.pos
                    Myrect.x = mouseX - offsetX
                    Myrect.y = mouseY - offsetY
                    
         
        screen.fill((0, 0, 0))

        current_collision = Myrect.colliderect(food_rect)
        if current_collision and not is_colliding:
            print("Collision")
            mixer.music.play()
        is_colliding = current_collision
        pygame.draw.rect(screen,(255,255,255),Myrect)
        screen.blit(myCat,Myrect)
        screen.blit(food,food_rect)
        pygame.display.flip()
    
    pygame.quit()

if __name__ == "__main__":
    main()