#include "chef.h"

Chef::Chef(string)
{
    chefName = "George";
    cout << "Chef constuctor." << endl;
}

Chef::~Chef()
{
    cout << "Chef deconstuctor." << endl;
}

string Chef::getName()
{
    cout << "Chef getName function." << endl;
}

int Chef::makeSalad(int ingredients)
{
    cout << "Chef makeSalad function." << endl;
    int salads = ingredients / 5;
    return salads;
}

int Chef::makeSoup(int ingredients)
{
    cout << "Chef makeSoup function." << endl;
    int soups = ingredients / 3;
    return soups;
}
