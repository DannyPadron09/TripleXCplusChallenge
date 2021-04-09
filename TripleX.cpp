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

    // Initializing a Variable with the sum of the User Guesses
    const int SumOfGuesses = GuessFirstSolution + GuessSecondSolution + GuessThirdSolution;

    // Initializing a Variable with the product of the User Guesses
    const int ProductOfGuesses = GuessFirstSolution * GuessSecondSolution * GuessThirdSolution;

    // Outputting Sum and Product Variables
    std::cout << "The sum of your guesses is : " << SumOfGuesses << std::endl;
    std::cout << "The product of your guesses is : " << ProductOfGuesses << std::endl;
    std::cout << std::endl;

    // Testing User Guesses to Correct Answers
    if (SumOfGuesses == SumOfNumbers && ProductOfGuesses == ProductOfNumbers)
    {
        std::cout << "You cracked the code!! Take your riches!!";
    }
    else 
    {
        std::cout << "Thats the wrong code you've been locked out!";
    }

    return 0;

}