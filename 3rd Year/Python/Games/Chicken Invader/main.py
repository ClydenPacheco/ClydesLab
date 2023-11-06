# importing pygame
import pygame
import random
import math
from pygame import mixer
 
# initialise the pygame
pygame.init()
 
# create the screen
screen = pygame.display.set_mode((800, 600))
 
# Images 📷
spaceship = pygame.image.load("spaceship.png")
bg = pygame.image.load("background.png")
asteroid = []
bullet = pygame.image.load("bullet.png")
 
# Title and Icon
pygame.display.set_caption("Space Invader ")
pygame.display.set_icon(spaceship)
 
# Player function 🏃‍♂️
PlayerX = 370
PlayerY = 480
PlayerX_change = 0
 
def player(x, y):
    screen.blit(spaceship, (x, y))
 
# Enemy function 💀
EnemyX = []
EnemyY = []
EnemyX_change = []
EnemyY_change = []
num_of_enemies = 6
for i in range(num_of_enemies):
    asteroid.append(pygame.image.load("asteroid.png"))
    EnemyX.append(random.randint(71, 729))
    EnemyY.append(random.randint(0, 150))
    EnemyX_change.append(3)
    EnemyY_change.append(0)
 
 
def enemy(x, y):
    screen.blit(asteroid[i], (x, y))
 
# Bullet function
BulletX = 0
BulletY = 480
BulletY_change = 10
Bullet_state = "ready"
 
def shoot(x, y):
    global Bullet_state
    Bullet_state = "fire"
    screen.blit(bullet, (x+16, y+10))
 
# Bullet Collision
 
def isCollision(EnemyX, EnemyY, BulletX, BulletY):
    distance = math.sqrt(math.pow(EnemyX-BulletX, 2)+ math.pow(EnemyY-BulletY, 2))
    if distance < 27:
        return True
    else:
        return False
   
   
# Music 🎹
mixer.music.load("music.wav")
mixer.music.play(-1)
 
# Score
score = 0
font = pygame.font.Font('freesansbold.ttf', 32)
TextX = 10
TextY = 10
 
def show_score(x, y):
    display = font.render("Score : " + str(score), True, (255, 255, 255))
    screen.blit(display, (x, y))
   
# Game Over
 
gofont = pygame.font.Font('freesansbold.ttf', 50)
Game_over_TextX = 250
Game_over_TextY = 200
 
def show_gameover(x, y):
    gameover = gofont.render("GAME OVER" , True , (255, 255 , 255 ))
    screen.blit(gameover, (x, y))
 
 
# pygame game loop
running = True
while running:
 
           
#Adding Background image
    screen.blit(bg, (0,0))
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
           
        # Player Movement and Bullet shoot
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_LEFT:
                PlayerX_change = -0.65
               
            if event.key == pygame.K_RIGHT:
                PlayerX_change = 0.65
               
                        # bullet shoot
            if event.key == pygame.K_SPACE:
                if Bullet_state == "ready":
                    BulletX = PlayerX
                    shoot(BulletX, PlayerY)
    # Bullet Movement
    if BulletY <= 0:
        BulletY = 480
        Bullet_state = "ready"
   
    if Bullet_state == "fire":
        shoot(BulletX, BulletY)
        BulletY -= BulletY_change
               
               
    PlayerX += PlayerX_change
    player(PlayerX, PlayerY)
   
    # checking for border
 
    if PlayerX < 0:
        PlayerX = 0
 
    if PlayerX > 730:
        PlayerX = 730
       
    # checking for border Enemy🔳
    for i in range(num_of_enemies):
        if EnemyX[i] < 70:
            EnemyX_change[i] *= -1
            EnemyY[i] += 40
       
        if EnemyX[i] > 730:
            EnemyX_change[i] *= -1
            EnemyY[i] += 40
       
        EnemyX[i] += EnemyX_change[i]
        EnemyY[i] += EnemyY_change[i]
       
        # Collision
        collision = isCollision(EnemyX[i], EnemyY[i], BulletX, BulletY)
        if collision:
            explosion = mixer.Sound('explosion.wav')
            explosion.play()
            BulletY = 480
            Bullet_state = "ready"
            score += 1
            EnemyX[i] = random.randint(71, 729)
            EnemyY[i] = random.randint(0, 150)
           
        if EnemyY[i] > 480:
            for j in range(num_of_enemies):
                EnemyY[j] = 2000
            show_gameover(Game_over_TextX, Game_over_TextY)
 
        # Calling Enemy function
        enemy(EnemyX[i], EnemyY[i])
       
    # Show Score
    show_score(TextX, TextY)
       
 
    # Updating Screen
    pygame.display.update()