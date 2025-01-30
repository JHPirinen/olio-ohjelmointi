#include <iostream>
#include "asiakas.h"
#include "luottotili.h"
#include "pankkitili.h"

using namespace std;

int main()
{
    Asiakas num1("Jari", 2000);
    num1.showSaldo();
    num1.talletus(250);
    num1.luotonNosto(150);
    cout << endl;
    Asiakas num2("Pekka", 3000);
    num2.showSaldo();
    num1.tiliSiirto(50, num2.getNimi());
    return 0;
}
