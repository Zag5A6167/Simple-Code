import pygame

pygame.init()

TILE_SIZE = 50
TILE_COLOR_1 = (100,100,100) # Light gray
TILE_COLOR_2 = (200,200,200) # Dark gray


GAP = 2
clicked_tiles = set()
screen_width = 800
screen_height = 600
screen = pygame.display.set_mode((screen_width,screen_height))
pygame.display.set_caption("My game")

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            exit()
        if event.type == pygame.MOUSEBUTTONDOWN:
            clicked_tiles.add((mouse_tile_x,mouse_tile_y))
    screen.fill((30, 30, 30))
    mouse_pos = pygame.mouse.get_pos()

    mouse_tile_x  = mouse_pos[0] // TILE_SIZE
    mouse_tile_y = mouse_pos[1] // TILE_SIZE
    print(clicked_tiles)
    for row in range(0,screen_height,50):
        for col in range(0,screen_width,50):
            current_tile = (col // TILE_SIZE, row // TILE_SIZE)
            if current_tile in clicked_tiles:
                color = (24,252,100)
            elif mouse_tile_x == col // TILE_SIZE and mouse_tile_y== row // TILE_SIZE:
                color = (255,255,0)
            else:
                color = (100, 100, 100)
            pygame.draw.rect(screen, color, (col+GAP, row+GAP, TILE_SIZE-GAP*2, TILE_SIZE-GAP*2))
   
   
    
    pygame.display.flip()

pygame.quit()
exit()
