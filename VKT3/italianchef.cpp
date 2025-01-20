#include "italianchef.h"

ItalianChef::ItalianChef(string)
{
    chefName = "Mario";
    cout << "Italian chef constuctor." << endl;
    password = "pizza";
}

ItalianChef::~ItalianChef()
{
    cout << "Italian chef dconstuctor." << endl;
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
    if(flour >= water && water > 0){
        pizzas = flour / 5;
    }
    else if(water >= flour && flour > 0){
        pizzas = water / 5;
    }
    return pizzas;
}
