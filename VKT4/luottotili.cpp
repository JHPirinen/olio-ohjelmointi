#include "luottotili.h"

Luottotili::Luottotili(string omistajaNimi, double henkRaja) : Pankkitili(omistajaNimi){
    omistaja = omistajaNimi;
    luottoRaja = henkRaja;
    saldo = luottoRaja;
    cout << "Luottotili luotu " << omistaja << ":lle, luottoraja " << saldo << endl;
}

bool Luottotili::deposit(double sum)
{
    if(sum < 0){
        cout << "Negatiivista velanmaksua ei voi tehda." << endl;
        return false;
    }
    else if(saldo + sum > luottoRaja){
        cout << "Velanmaksu on suurempi kuin velka." << endl;
        return false;
    }
    else{
        saldo += sum;
        return true;
    }
}

bool Luottotili::withdraw(double sum)
{
    if(sum < 0){
        cout << "Negatiivista nostoa ei voi tehda." << endl;
        return false;
    }
    else if(sum > saldo){
        cout << "Nosto on suurempi kuin luottoraja" << endl;
        return false;
    }
    else{
        saldo -= sum;
        return true;
    }
}
