#include<iostream>
#include<vector>
using namespace std;


int num = 59667;
int count = 1;
int reverse = 0;


int main(){
    while (num >= 10){
        num = num /10;
        count = count + 1;
        
    }

    int  remain;

   for (int i = 0; i<count ; i++){
        reverse = reverse + remain;
        remain = num %10;
        reverse = remain;
        reverse = reverse *10;
   
   }
std::cout <<reverse;

    
    
   

    
   
    return 0;

}