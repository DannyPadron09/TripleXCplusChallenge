#include <iostream>

int main()
{

    // std = namespace, cout = is defined in std 
    std::cout << "Crack the safe code and get the riches!";

    std::cout << std::endl; // New Line Code

    std::cout << "Enter the right code or get locked out!";

    std::cout << std::endl; // New Line Code

    const int FirstSolutionNumber = 4; // Initializing variables
    const int SecondSolutionNumber = 5;
    const int ThirdSolutionNumber = 6;

    // Sum of all 3 variables
    const int SumOfNumbers = FirstSolutionNumber + SecondSolutionNumber + ThirdSolutionNumber;

    // Product of all 3 variables
    const int ProductOfNumbers = FirstSolutionNumber * SecondSolutionNumber * ThirdSolutionNumber;

    // Game instruction / hints
    std::cout << std::endl;
    std::cout << " - There are 3 numbers in the safe code" << std::endl;
    std::cout << " - The codes add up to : " << SumOfNumbers << std::endl;

    std::cout << " - The codes multiply to : " << ProductOfNumbers << std::endl;

    int PlayerGuess;
    std::cout << "Enter your guess for the code - ";
    std::cin >> PlayerGuess;
    std::cout << std::endl;

    std::cout << "You entered : " << PlayerGuess;
    
    return 0;

}