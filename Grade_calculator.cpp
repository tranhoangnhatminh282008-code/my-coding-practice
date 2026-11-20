#include<iostream>
#include<cmath>
#include<vector>


double math_grade;
double Literatture_grade;
double first_choosen_subject;
double second_choosen_subject;


int main(){{
    
    std::cout << "Enter your math grade: ";
    std::cin >> math_grade;
    std::cout <<"enter your literature grade: ";
    std::cin >> Literatture_grade;

    std::cout << "Enter your first choosen subject grade: ";
    std::cin >> first_choosen_subject;
    std::cout <<"enter your second choosen subject grade: ";
    std::cin >> second_choosen_subject;
    
    double combination_1;
    double combination_2;
    double combination_3;
    double combination_4;

    combination_1 = (math_grade + Literatture_grade + first_choosen_subject);
    combination_2 = (math_grade + Literatture_grade + second_choosen_subject);
    combination_3 = (math_grade + first_choosen_subject + second_choosen_subject);
    combination_4 = (Literatture_grade +first_choosen_subject + second_choosen_subject);

    double a = std::max(combination_1,combination_2);
    double b = std::max(a,combination_3);
    double c = std::max(b,combination_4);

    std::cout << "the combination_1: " << combination_1 << '\n';
    std::cout << "the combination_2: " << combination_2 << '\n';
    std::cout << "the combination_3: " << combination_3 << '\n';
    std::cout << "the combination_4: " << combination_4 << '\n';

    std::cout << "The highest combination is: " << c;



}}
