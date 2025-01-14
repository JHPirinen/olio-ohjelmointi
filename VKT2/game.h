#ifndef GAME_H
#define GAME_H

class Game
{
public:
    Game(int);  //works if it was Game();
    ~Game(); // works if deleted
    int play();

    int getMaxNumber() const;
    void setMaxNumber(int newMaxNumber);
    int getPlayerGuess() const;
    void setPlayerGuess(int newPlayerGuess);
    int getRandomNumber() const;
    void setRandomNumber(int newRandomNumber);
    int getNumOfGuesses() const;
    void setNumOfGuesses(int newNumOfGuesses);

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();
};

#endif // GAME_H
