#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas num1("Jari", 2000);
    num1.talletus(300);
    num1.showSaldo();
    cout << endl;
    Asiakas num2("Pekka", 3000);
    num2.luotonNosto(500);
    num2.showSaldo();
    cout << endl;
    num1.tiliSiirto(100, num2);
    num1.showSaldo();
    num2.showSaldo();
    cout << endl;
    num2.nosto(100);
    num2.luotonMaksu(100);
    num1.showSaldo();
    num2.showSaldo();
    return 0;
}
