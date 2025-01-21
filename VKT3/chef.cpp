#include "chef.h"

Chef::Chef(string name)
{
    chefName = name;
    cout << "Chef " << chefName << " constuctor." << endl;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " deconstuctor." << endl;
}

string Chef::getName()
{
    cout << "Chef getName function." << endl;
}

int Chef::makeSalad(int ingredients)
{
    int salads = ingredients / 5;
    cout << "With " << ingredients << " ingredients chef " << chefName << " can make " << salads << " salad meals." << endl;
    return salads;
}

int Chef::makeSoup(int ingredients)
{
    int soups = ingredients / 3;
    cout << "With " << ingredients << " ingredients chef " << chefName << " can make " << soups << " soup meals." << endl;
    return soups;
}
