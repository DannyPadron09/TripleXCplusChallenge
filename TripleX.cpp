#include <iostream>

int main()
{

    // std = namespace, cout = is defined in std 
    std::cout << "Crack the safe code and get the riches!";

    // New Line Code
    std::cout << std::endl; 

    std::cout << "Enter the right code or get locked out!";

    // New Line Code
    std::cout << std::endl; 

    // Initializing variables
    const int FirstSolutionNumber = 4; 
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

    // Variables for User Guesses
    int GuessFirstSolution, GuessSecondSolution, GuessThirdSolution;
    
    // Storing User input for first guess
    std::cout << "Enter your FIRST guess for the code - ";
    std::cin >> GuessFirstSolution;
    std::cout << std::endl;

    // Storing User input for second guess
    std::cout << "Enter your SECOND guess for the code - ";
    std::cin >> GuessSecondSolution;
    std::cout << std::endl;

    // Storing User input for third guess
    std::cout << "Enter your THIRD guess for the code - ";
    std::cin >> GuessThirdSolution;
    std::cout << std::endl;


    std::cout << "Your first guess is : " << GuessFirstSolution << std::endl;
    std::cout << "Your second guess is : " << GuessSecondSolution << std::endl;
    std::cout << "Your third guess is : " << GuessThirdSolution << std::endl;

    
    return 0;

}