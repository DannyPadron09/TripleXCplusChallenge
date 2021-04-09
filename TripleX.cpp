#include <iostream>

void PrintIntro(int Difficulty)
{

    // std = namespace, cout = is defined in std 
    std::cout << "\n\n Crack the safe code at level " << Difficulty;

    std::cout << " and get the riches!\n Enter the right code or get locked out!\n";

}

bool PlayTheGame(int Difficulty)
{

    PrintIntro(Difficulty);


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
    std::cout << " - There are 3 numbers in the safe code";
    std::cout << "\n - The codes add up to : " << SumOfNumbers;
    std::cout << "\n - The codes multiply to : " << ProductOfNumbers;

    // Variables for User Guesses
    int GuessFirstSolution, GuessSecondSolution, GuessThirdSolution;
    
    // Storing User input for first guess
    std::cout << "\n Enter your FIRST guess for the code - ";
    std::cin >> GuessFirstSolution;

    // Storing User input for second guess
    std::cout << "\n Enter your SECOND guess for the code - ";
    std::cin >> GuessSecondSolution;

    // Storing User input for third guess
    std::cout << "\n Enter your THIRD guess for the code - ";
    std::cin >> GuessThirdSolution;

    // Initializing a Variable with the sum of the User Guesses
    const int SumOfGuesses = GuessFirstSolution + GuessSecondSolution + GuessThirdSolution;

    // Initializing a Variable with the product of the User Guesses
    const int ProductOfGuesses = GuessFirstSolution * GuessSecondSolution * GuessThirdSolution;

    // Outputting Sum and Product Variables
    std::cout << "\n The sum of your guesses is : " << SumOfGuesses;
    std::cout << "\n The product of your guesses is : " << ProductOfGuesses;
    std::cout << std::endl;

    // Testing User Guesses to Correct Answers
    if (SumOfGuesses == SumOfNumbers && ProductOfGuesses == ProductOfNumbers)
    {
        std::cout << "\n You cracked the code!! Take your riches!!\n";
        return true;
    }
    else 
    {
        std::cout << "\n Thats the wrong code!\n";
        return false;
    }

}

int main()
{


    int LevelDifficulty = 1;


    while (true)
    {
        bool bLevelComplete = PlayTheGame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer


        if (bLevelComplete)
        {
            // Increase Level Difficulty
            ++LevelDifficulty;
        }
        
    }

    return 0;

}