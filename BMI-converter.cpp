#include <iostream>
#include <cmath>
#include <vector>

double height; 
double weight;
double  BMI;

int main(){
    std::cout << "enter your height in cm:  ";
    std::cin >> height;
    std::cout <<"enter your weight in kg: ";
    std::cin >> weight;
 

    BMI = (weight)/pow(height/100,2);

    std::cout <<"your BMI is: "<<BMI<<'\n';

    if(BMI <= 18.5){
        std::cout << " you're underweight !!";
    }
    else if(BMI >=18.5 && BMI <= 22.9){
        std::cout <<"Don't worry,you're fine";

    }
    else if(BMI >=23 && BMI <= 24.9){
        std::cout <<"you're overweight !!";

    }
    else if(BMI >25 ){
        std::cout <<"you're obese !!";

    }


}