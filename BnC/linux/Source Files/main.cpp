#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
std::string GetGuess();
void PrintGuess(std::string playerGuess);
void PlayGame();
bool AskToPlayAgain();

int main()
{
    do
    {
        PrintIntro();
        PlayGame();
    } while (AskToPlayAgain());

    return 0;

} // main

void PlayGame()
{
    FBullCowGame BCGame; //instantiate a new game
    BCGame.Reset();
    int MaxTries = BCGame.getNumTries();
    std::cout << MaxTries << std::endl;
    constexpr int NUM_TURNS = 5;
    for (int i = 0; i < MaxTries; i++)
    {
        std::string guess = GetGuess();
        PrintGuess(guess);
    }
} // loop for the number of turns asking for guesses

void PrintIntro()
{
    constexpr int WORD_LENGTH = 9;
    std::cout << std::endl
              << std::endl
              << "Welcome to Bulls and Cows\n";
    std::cout << "Can you guess the " << WORD_LENGTH;
    std::cout << " letter isogram I'm thinking of?\n\n";
    return;

} //Introduce the game

std::string GetGuess()
{
    std::string playerGuess = " ";
    std::cout << "Enter your guess: ";
    getline(std::cin, playerGuess);
    return playerGuess;

} // get a guess from the user

void PrintGuess(std::string playerGuess)
{
    std::cout << "Your guess was: " << playerGuess << std::endl
              << std::endl;
} // Print the Player's guess

bool AskToPlayAgain()
{
    std::string choice = "";
    std::cout << "Do you want to play again (y/n)?";
    getline(std::cin, choice);
    return (choice[0] == 'y' || choice[0] == 'Y');
}