#include <string>

class FBullCowGame
{
private:
    int myCurrentTry;
    int myMaxTries;

public:
    FBullCowGame();
    void Reset(); //TODO make return val more meaningful
    int getNumTries() const;
    int getCurrentTry() const;
    bool isGameWon() const;
    bool isGuessValid(std::string); //TODO make return val more meaningful

};