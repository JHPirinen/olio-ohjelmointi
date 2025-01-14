#include "game.h"
#include <iostream>
#include <ctime>

using namespace std;

Game::Game(int) //works if it was Game::Game()
{
    cout << "GAME CONSTRUCTOR: ";
    maxNumber = 10;
    cout << "object initialized with " << maxNumber << " as a maximum value." << endl;
}

int Game::getMaxNumber() const
{
    return maxNumber;
}

void Game::setMaxNumber(int newMaxNumber)
{
    maxNumber = newMaxNumber;
}

int Game::getPlayerGuess() const
{
    return playerGuess;
}

void Game::setPlayerGuess(int newPlayerGuess)
{
    playerGuess = newPlayerGuess;
}

int Game::getRandomNumber() const
{
    return randomNumber;
}

void Game::setRandomNumber(int newRandomNumber)
{
    randomNumber = newRandomNumber;
}

int Game::getNumOfGuesses() const
{
    return numOfGuesses;
}

void Game::setNumOfGuesses(int newNumOfGuesses)
{
    numOfGuesses = newNumOfGuesses;
}

Game randNumGame;

void play(){
    int gameOn = true;
    int guess;
    srand(time(NULL));
    randNumGame.setRandomNumber((rand() % randNumGame.getMaxNumber()) + 1);

    while(gameOn == true){
        cout << "Quess a number between 1-" << randNumGame.getMaxNumber() << "." << endl;
        cin >> guess;
        randNumGame.setPlayerGuess(guess);
        randNumGame.setNumOfGuesses(randNumGame.getNumOfGuesses() + 1);
        if(randNumGame.getPlayerGuess() == randNumGame.getRandomNumber()){
            cout << "Your quess is correct!" << endl;
            gameOn = false;
        }
        else if(randNumGame.getPlayerGuess() < randNumGame.getRandomNumber()){
            cout << "Your quess is smaller." << endl;
        }
        else if(randNumGame.getPlayerGuess() > randNumGame.getRandomNumber()){
            cout << "Your quess is larger." << endl;
        }
    }
}

void printGameResult(){
    cout << "You quessed the corret number with " << randNumGame.getNumOfGuesses() << " quesses." << endl;
}
