#include<iostream>
#include<cmath>

int num; 
int fact =1;
int main(){
    std::cout << "Enter a number: ";
    std::cin >> num;
    for (int i = 1; i <=num ;i++){
        fact = fact * i;
        
    }
    std::cout << num<<"! = "<< fact;
}