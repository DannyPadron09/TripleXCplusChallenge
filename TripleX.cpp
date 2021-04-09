#include <iostream>

int main()
{

    // std = namespace, cout = is defined in std 
    std::cout << "Crack the safe code and get the riches!";

    std::cout << std::endl; // New Line Code

    std::cout << "Enter the right code or get locked out!";

    std::cout << std::endl; // New Line Code

    const int firstSolutionNumber = 4; // Initializing variables
    const int secondSolutionNumber = 5;
    const int thirdSolutionNumber = 6;

    // Sum of all 3 variables
    const int sumOfNumbers = firstSolutionNumber + secondSolutionNumber + thirdSolutionNumber;

    const int productOfNumbers = firstSolutionNumber * secondSolutionNumber * thirdSolutionNumber;

    std::cout << firstSolutionNumber << std::endl;
    std::cout << secondSolutionNumber << std::endl;
    std::cout << thirdSolutionNumber << std:: endl;

    std::cout << "There are 3 numbers in the safe code" << std::endl;
    std::cout << "The codes add up to : " << sumOfNumbers << std::endl;

    std::cout << "The codes multiply to : " << productOfNumbers << std::endl;

    return 0;

}