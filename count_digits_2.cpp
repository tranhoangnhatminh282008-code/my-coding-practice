#include <iostream>

int main(){
    double num ;
    int times = 1;
    std::cout << "enter a num: ";
    std::cin >> num;
    while (num >= 10){
        num = num /10;
        times = times + 1;
        
        
    }
    
    std::cout << times;
    
    
    return 0; 
}