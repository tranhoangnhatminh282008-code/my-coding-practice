# num = generate a random number (1-100)
#loop 
    # ask user to enter their guess 
    # if user_input > num:
        #print(too high)
    #if user input < num:
        #print( too low)
    #elif user input == num:
        # print(congrat )
        # break 

import random 
num = random.randint(1,100)

while True:
    try: 
        user_input = int(input("guessing a number between 1-100: "))
        if user_input > num:
            print("TOO HIGH!!, TRY AGAIN!")
        elif user_input < num:
            print("TOO LOW!!, |TRY AGAIN!")
        else:
            print(f"congratulation, {num} is the correct number")
            break
        
    except ValueError:
        print(f"this is not a valid response")


       
        