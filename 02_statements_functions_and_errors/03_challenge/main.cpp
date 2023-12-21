#include <iostream>

int power(int a, int b);


int main(){
    int base = 0;
    int exponent = 2;
    
    
    base = 3;
    exponent = 4;
    std::cout << "power(" << base << "," << exponent << ") = " << power(base,exponent) << std::endl;
}

int power(int base, int exponent){
    if (exponent == 1){
        return base;
    }else{
        return base * power(base, exponent-1);
    }
}