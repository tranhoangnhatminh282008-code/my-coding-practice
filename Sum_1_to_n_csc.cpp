#include<iostream>

int num;
int a =1;

/*int main(){
    std::cout << "Choose a random number: ";
    std::cin >> num;
    for (int i=1; i<=num; i++) {
        

    }
    std::cout <<"the sum of 1 to "<<num<< " = "<<a;
    return 0;
}*/
int main(){
    
    int n;
    std::cout<<"enter a random number: ";
    std::cin >>n;

    int sum_a;
    int sum;
    sum = (n+1)*n/2;
   
    std::cout <<"the sum of 1 to "<<n<< " = "<<sum;
    return 0;
    
}