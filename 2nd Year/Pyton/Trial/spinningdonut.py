import math

def donut():
    # define the characters to use for the donut
    chars = [' ', '.', ':', '-', '=', '+', '*', '#', '%', '@']
    
    # set up the dimensions of the donut
    a = 1
    b = 2
    size = 40
    
    # create an empty list to hold the donut
    donut = [[' ' for _ in range(size)] for _ in range(size)]
    
    # calculate the sin and cos values for the donut
    sin_vals = [math.sin(x) for x in range(0, 628, 10)]
    cos_vals = [math.cos(x) for x in range(0, 628, 10)]
    
    # draw the donut
    for i in range(size):
        for j in range(size):
            dist = math.sqrt((i-size/2)**2 + (j-size/2)**2)
            if dist < size/2:
                x = int(10 + a * (1 - dist / (size/2)) * cos_vals[int(j-a) % len(cos_vals)])
                y = int(10 + b * (1 - dist / (size/2)) * sin_vals[int(j-a) % len(sin_vals)])
                donut[x][y] = chars[int((j + i) % len(chars))]
    
    # print the donut
    for row in donut:
        print(''.join(row))
        
# call the donut function to display the spinning donut
donut()