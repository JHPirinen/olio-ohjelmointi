#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kitchen("George");
    kitchen.makeSalad(13);
    kitchen.makeSoup(21);
    ItalianChef itKitchen("Mario");
    itKitchen.makeSalad(9);
    itKitchen.makeSoup(6);
    itKitchen.askSecret("pizza", 12, 15);
    return 0;
}
