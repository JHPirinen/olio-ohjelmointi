#include "asiakas.h"

Asiakas::Asiakas(string omistajaNimi, double henkRaja) : kayttotili(omistajaNimi), luottotili(omistajaNimi, henkRaja){
    nimi = omistajaNimi;
    cout << "Asiakkuus luotu " << nimi << ":lle" << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin " << nimi << ": saldo on " << kayttotili.getBalance() << endl;
    cout << "luottotilin " << nimi << ": saldo on " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double sum)
{
    if(kayttotili.deposit(sum) == true){
        cout << "Kayttotili " << nimi << ": talletus " << sum << " tehty, tilin saldo " << kayttotili.getBalance() << endl;
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::nosto(double sum)
{
    if(kayttotili.withdraw(sum) == true){
        cout << "Kayttotili " << nimi << ": nosto " << sum << " tehty, tilin saldo " << kayttotili.getBalance() << endl;
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::luotonMaksu(double sum)
{
    if(luottotili.deposit(sum) == true){
        cout << "Luottotili " << nimi << ": masku " << sum << " tehty, luottoa jaljella " << luottotili.getBalance() << endl;
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::luotonNosto(double sum)
{
    if(luottotili.withdraw(sum) == true){
        cout << "Luottotili " << nimi << ": nosto " << sum << " tehty, luottoa jaljella " << luottotili.getBalance() << endl;
        return true;
    }
    else{
        return false;
    }
}

bool Asiakas::tiliSiirto(double sum, Asiakas & saajaNimi)
{
    cout << "Kayttotili " << nimi << ": siirtaa " << sum << " " << saajaNimi.nimi << ":lle" << endl;
    if(nosto(sum) == true){
        saajaNimi.talletus(sum);
        return true;
    }
    else{
        return false;
    }
}
