#include "../Header Files/FBullCowGame.h"

FBullCowGame::FBullCowGame() { Reset(); }

int FBullCowGame::getNumTries() const { return myMaxTries; }
int FBullCowGame::getCurrentTry() const { return myCurrentTry; }

bool FBullCowGame::isGameWon() const
{
    return true;
}

void FBullCowGame::Reset()
{
    constexpr int MAX_TRIES = 8;
    myMaxTries = MAX_TRIES;

    myCurrentTry = 1;
    return;
}
bool FBullCowGame::isGuessValid(std::string)
{
    return true;
} //TODO make return val more meaningful