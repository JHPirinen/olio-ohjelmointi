#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kitchen;
    ItalianChef itKitchen;
    kitchen.makeSalad(13);
    kitchen.makeSoup(21);
    itKitchen.askSecret("pizza", 12, 15);
    return 0;
}
