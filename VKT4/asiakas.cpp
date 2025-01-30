#include "asiakas.h"

Asiakas::Asiakas(string asiakasNimi, double henkRaja){
    nimi = asiakasNimi;
    Luottotili(nimi, henkRaja);
    cout << "Asiakkuus luotu" << nimi << ":lle" << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Kayttotilin " << nimi << " saldo on" << kayttotili.getBalance() << endl;
    cout << "luottotilin " << nimi << " saldo on" << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double sum)
{
    kayttotili.deposit(sum);
    cout << "Kaytotili" << nimi << ": talletus " << sum << " tehty, tilin saldo " << kayttotili.getBalance() << endl;
}

bool Asiakas::nosto(double sum)
{
    kayttotili.withdraw(sum);
    cout << "Kaytotili" << nimi << ": nosto " << sum << " tehty, tilin saldo " << kayttotili.getBalance() << endl;
}

bool Asiakas::luotonMaksu(double sum)
{
    luottotili.deposit(sum);
    cout << "Luottotili" << nimi << ": masku " << sum << " tehty, luottoa jaljella " << luottotili.getBalance() << endl;
}

bool Asiakas::luotonNosto(double sum)
{
    luottotili.withdraw(sum);
    cout << "Luottotili" << nimi << ": nosto " << sum << " tehty, luottoa jaljella " << luottotili.getBalance() << endl;
}

bool Asiakas::tiliSiirto(double sum, Asiakas & saajaNimi)
{
    cout << "Kaytotili: " << nimi << " siirtaa " << sum << " " << saajaNimi.nimi << ":lle" << endl;
    nosto(sum);
    saajaNimi.talletus(sum);
}
