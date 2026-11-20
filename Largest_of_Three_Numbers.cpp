#include<iostream>
#include<vector>
#include<cmath>

double num_1;
double num_2;
double num_3;


int main(){

    std::cout <<"Enter your 1st number: ";
    std::cin>>num_1;
    std::cout <<"Enter your 2nd number: ";
    std::cin>>num_2;
    std::cout <<"Enter your 3rd number: ";
    std::cin>>num_3;

    double a = num_1-num_2;
    double b;
    if (a > 0) {     
        b = num_3-num_1; 
        if (b>0){
            std::cout <<"the largest number is "<<num_3;
        }
        else if (b<0){
            std::cout <<"the largest number is "<<num_1;
        }
    }
    else if (a < 0) {     
        b = num_3-num_2; 
        if (b>0){
            std::cout <<"the largest number is "<<num_3;
        }
        else if (b<0){
            std::cout <<"the largest number is "<<num_2;
        }
    }
    
}