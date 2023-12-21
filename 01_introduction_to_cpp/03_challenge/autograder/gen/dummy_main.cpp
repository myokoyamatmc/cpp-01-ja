#include <iostream>
#include <string>

int dummy_main() {
    // Complete everything in this program.
    // Compile and execute the program without errors.

    // Complete the following variables by using the correct types for the data.
    int pizzaSlices = 12;
    float pi = 3.14159f;
    long long starsInTheUniverse = 1234567890LL;
    char aLetter = 'k';
    std::string aWord = "kaleidescope";
    double veryPrecisePi = 3.14159265358979;
    bool thisIsTrue = true;
    bool thisIsAlsoTrue = thisIsTrue;

    // On the next three lines, declare and initialize a new variable on each line. Each variable must be a different data type.
    // variable #1 here
    // variable #2 here
    // variable #3 here

    // Complete these arrays by giving them the correct data type.
    int myArray[] = {1, 2, 3, 4};
    float anotherArray[] = {3.5, 1.2, 6.7};

    // Make your own array on the next line. It should contain at least 5 numbers. The numbers can be any number data type, but they must all be the same data type.

    // This array should not use `int` because it stores big numbers. What data type is better?
    long long bigNumbers[] = {500000, 700000, 800000};

    // Use static_cast to change 'sizeOfCesiumAtom' to an int. Use 'static_cast' on the line after sizeOfCesiumAtom.
    double sizeOfCesiumAtom = 0.267;
    int sizeOfCesiumAtomCast = static_cast<int>(sizeOfCesiumAtom);

    // Make three constant variables. You can use any data type, but each variable must be a different data type.
    // constant variable #1 here
    // constant variable #2 here
    // constant variable #3 here

    // You don't need to change anything here. These lines are for checking program output.
    std::cout << pizzaSlices << std::endl;
    std::cout << pi << std::endl;
    std::cout << starsInTheUniverse << std::endl;
    std::cout << aLetter << std::endl;
    std::cout << aWord << std::endl;
    std::cout << veryPrecisePi << std::endl;
    std::cout << thisIsTrue << std::endl;
    std::cout << thisIsAlsoTrue << std::endl;
    std::cout << "The size of a Cesium atom in nanometers is: " << sizeOfCesiumAtomCast << std::endl;

    return 0;
}
