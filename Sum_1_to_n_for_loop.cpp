#include<iostream>

int num;
int total;

int main(){
    std::cout << "Choose a random number: ";
    std::cin >> num;
    for (int i=1; i<=num; i++) {
        total = total + i;
    }
    std::cout <<"the sum of 1 to "<<num<< " = "<<total;
    return 0;
}
