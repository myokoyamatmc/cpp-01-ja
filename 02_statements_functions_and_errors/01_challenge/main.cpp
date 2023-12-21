#include <iostream>

int main(){
    int input;

    //for(int i=0; 1; i++){
        std::cin >> input;
        if (input == 100){
            return 0;
        }else if (input > 0){
            std::cout << "positive" << std::endl;
        }else if(input == 0){
            std::cout << "zero" << std::endl;
        }else{
            std::cout << "negative" << std::endl;
        }
    //}
    return 0;
}