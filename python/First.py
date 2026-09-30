import pygame
import random
import sys

# Initialize Pygame
pygame.init()

# Game constants
SCREEN_WIDTH = 400
SCREEN_HEIGHT = 600
FPS = 60

GRAVITY = 1.5
JUMP_STRENGTH = -250
PIPE_SPEED = 3
PIPE_FREQUENCY = 170  # Distance between pipes in pixels (at this speed)
GAP_SIZE = 150

# Colors
SKY_BLUE = (48, 169, 144)
BIRD_YELLOW = (255, 235, 60)
RED_TUBES_BROWN = (139, 69, 19)


class Bird:
    def __init__(self):
        self.size = 30  # Size of bird rectangle
        self.y = SCREEN_HEIGHT // 3
        self.velocity_y = 0
        
        # Create surface for the "bird" (circle/oval shape approximation using rectangles would be complex)
        # We'll use a simple colored rect to represent the bird
    
    def update(self):
        """Apply gravity and move the bird"""
        if not hasattr(self, 'jumped'):  # First frame after creation doesn't have jumped flag set yet
            self.jump()

        self.velocity_y += GRAVITY
        
        if self.y <= -self.size or y >= SCREEN_HEIGHT:
            return False
    
    def jump(self):
        """Apply upward force"""
        self.velocity_y = JUMP_STRENGTH
        self.jumped = True
    
    @property
    def rect(self, width=None, height=None) -> pygame.Rect:
        if width is None and height is None:
            return (self.x - self.size // 2, self.y - self.size / 2, 
                    self.size, self.size), self.velocity_y == JUMP_STRENGTH


def get_pipe_rect(pipe_x):
    """Return two pipe rects for the current frame"""
    rect1 = pygame.Rect(SCREEN_WIDTH//4) + random.randint(GAP_SIZE // 3, GAP_SIZE * 2)

# Create a simple bird image or draw it directly on screen


class Pipe:
    def __init__(self):
        self.x = SCREEN_WIDTH
    
