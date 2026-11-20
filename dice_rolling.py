
import random

def dice_rolling():
    dice_one = random.randint(1,10)
    dice_two = random.randint(1,10)
    print(f'({dice_one},{dice_two})')
while True: 
    request  =str(input("roll the dice? (y/n): ")).lower()
    
    if request == 'y':
        dice_rolling()
    elif request =='n':
        print("thank for playing")
        break
    else:
        print(f'{request} is not a valid respones')

