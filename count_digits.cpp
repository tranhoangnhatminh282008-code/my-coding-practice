#include<iostream> 

int main(){
    std::string num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    int c = num.length();
    if (c  == 1 ){
        std::cout << "There is 1 digits in this number";
    }
    else {
        std::cout << "There are "<< c <<" digits in this number ";
    }
}