#include "italianchef.h"

ItalianChef::ItalianChef(string name) : Chef(name)
{
    chefName = "Mario";
    cout << "Italian chef " << chefName << " constuctor." << endl;
    password = "pizza";
}

ItalianChef::~ItalianChef()
{
    cout << "Italian chef " << chefName << " dconstuctor." << endl;
}

bool ItalianChef::askSecret(string givenPassword, int givenFlour, int givenWater)
{
    if (givenPassword == password){
        cout << "Password ok!" << endl;
        flour = givenFlour;
        water = givenWater;
        makepizza();
        return true;
    }
    else {
        return false;
    }
}

int ItalianChef::makepizza(){
    int pizzas = 0;
    if(flour >= water){
        pizzas = water / 5;
    }
    else if(water > flour){
        pizzas = flour / 5;
    }
    cout << "With " << flour << " flour and " << water << " water Italian chef " << chefName << " can make " << pizzas << " pizza meals." << endl;
    return pizzas;
}
