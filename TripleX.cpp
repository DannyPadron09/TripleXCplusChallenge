#include <iostream>

int main()
{

    // std = namespace, cout = is defined in std 
    std::cout << "Crack the safe code and get the riches!";

    std::cout << std::endl; // New Line Code

    std::cout << "Enter the right code or get locked out!";

    std::cout << std::endl; // New Line Code

    int firstSolutionNumber = 4; // Initializing variables
    int secondSolutionNumber = 5;
    int thirdSolutionNumber = 6;

    int sumOfNumbers = firstSolutionNumber + secondSolutionNumber + thirdSolutionNumber;

    std::cout << firstSolutionNumber;
    std::cout << std::endl;
    std::cout << secondSolutionNumber;
    std::cout << std::endl;
    std::cout << thirdSolutionNumber;
    std::cout << std::endl;

    // Sum of all 3 variables
    std::cout << sumOfNumbers;

    return 0;

}