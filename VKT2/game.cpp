#include "game.h"
#include <iostream>
#include <ctime>

using namespace std;

Game::Game(int maxNum)
{
    cout << "GAME CONSTRUCTOR: ";
    maxNumber = maxNum;
    numOfGuesses = 0;
    playerGuess = 0;
    randomNumber = 0;
    cout << "object initialized with " << maxNumber << " as a maximum value." << endl;
}

Game::~Game()
{
    cout << "GAME DECONSTRUCTOR: object cleared from stack memory." << endl;
}

int Game::play()
{
    bool gameOn = true;
    srand(time(NULL));
    randomNumber = ((rand() % maxNumber) + 1);
    while(gameOn == true){
        cout << "Quess a number between 1-" << maxNumber << "." << endl;
        cin >> playerGuess;
        numOfGuesses ++;
        if(playerGuess == randomNumber){
            cout << "Your quess is correct!" << endl;
            printGameResult();
            gameOn = false;
        }
        else if(playerGuess < randomNumber){
            cout << "Your quess is smaller." << endl;
        }
        else if(playerGuess > randomNumber){
            cout << "Your quess is larger." << endl;
        }
    }
    return numOfGuesses;
}

void Game::printGameResult()
{
    cout << "You quessed the corret number with " << numOfGuesses << " quesses." << endl;
}
