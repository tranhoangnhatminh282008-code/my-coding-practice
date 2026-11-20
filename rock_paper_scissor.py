
#ask user to choose rock paper scissors
#check if the user input is valid

#loop
    #if it is valid 
        #print player choice 
        #print computer choice
        #if player choose r -->:
            #if computer == p:
                #computer win 
            #if computer == s:
                #player win 
            #if computer == r:
                #tie game
                
        #elif player choose p -->:
                #if computer == s:
                    #computer win 
                #if computer == r:
                    #player win 
                #if computer == p:
                    #tie game  

        #elif player choose s -->:
                #if computer == r:
                    #computer win 
                #if computer == p:
                    #player win 
                #if computer == r:
                    #tie game  
            
    #else
        #print user input is not a valid response

import random 
num = random.randint(1,3)
def computer_random(num1):
    rps =''
    if num1 == 1:
        rps  = 'rock'
    elif num1 == 2:
        rps = 'paper'
    elif num1 == 3 :
        rps = 'scissors'
    return rps 

def user_random(user_index):
    uc =''
    if user_index == 'r':
        uc  = 'rock'
    elif user_index == 'p':
        uc = 'paper'
    elif user_index == 's' :
        uc = 'scissors'
    return uc     
           
choices = ['r','p','s']
while True:
    user_choice = input("choose rock, paper, scissors (r/p/s): ")
    userran = user_random(user_choice)
    if user_choice in choices:
        print(f'player chose {userran}')
        print(f'computer chose {computer_random(num)}')
# determine the winner: 
        if user_random(user_choice) == computer_random(num):
            print('tie game')
        elif (userran == 'rock' and computer_random(num) =='scissors') or \
            (userran == 'paper' and computer_random(num) =='rock') or \
            (userran == 'scissors' and computer_random(num) =='paper'):
            print("You win!!")
        else:
            print("computer win!!")

        endgame =input("continues? (y/n): ").lower()
        if endgame == 'y':
            continue
        elif endgame =='n':
            break
        else:
            print(f'{user_choice} is not valid')
            break


    else:
        print(f'{user_choice} is not valid')
        
    