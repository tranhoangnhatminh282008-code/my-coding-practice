#include<iostream>

int user_num;

int main(){
    std::cout <<"--------------------------------------------------------------------"<<'\n';
    std::cout <<"------------------THIS IS A MULTIPLICATION TABLE-------------------- " <<'\n';
    std::cout <<"--------------------------------------------------------------------"<<'\n';

    std::cout << "Enter a number between 1-10: ";
    std::cin >> user_num;
    if(user_num >=1 && user_num <=10){
        for (int i=1; i<=10; i++){
        
        std::cout << user_num <<" X " << i <<" = "<<user_num*i <<'\n';
        
    }
    }
    else{
        std::cout << user_num <<" is curently not available "<<'\n';
        std::cout << "please enter the available number (1-10)" <<'\n';
    }
    
    
    std::cout <<"Thank you for using the table ";
    return 0;

}