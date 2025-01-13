#include <iostream>
#include <ctime>

using namespace std;
int game(int);
int main()
{
    int maxnum;
    cout << "Anna suurin arvottava luku: ";
    cin >> maxnum;
    game(maxnum);
    return 0;
}

int game(int maxnum){
    int arpa;
    int peli = 1;
    srand(time(NULL));
    int randNum = (rand() % maxnum) + 1;
    while(peli == 1){
        cout << "Arvaa satunnainen luku: ";
        cin >> arpa;
        if(arpa == randNum){
            cout << "Oikea vastaus!" << endl;
            peli = 0;
        }
        else if(arpa < randNum){
            cout << "Satunnainen on suurempi." << endl;
        }
        else if(arpa > randNum){
            cout << "Satunnainen on pienempi." << endl;
        }
    }
    return 0;
}
