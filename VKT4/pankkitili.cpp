#include "pankkitili.h"

Pankkitili::Pankkitili(string omistajaNimi){
    omistaja = omistajaNimi;
    cout << "Kayttotili luotu " << omistaja << ":lle" << endl;
}

double Pankkitili::getBalance(){
    return saldo;
}

bool Pankkitili::deposit(double sum){
    if(sum < 0){
        cout << "Negatiivista talletustaa ei voi tehda." << endl;
        return false;
    }
    else{
        saldo += sum;
        return true;
    }
}

bool Pankkitili::withdraw(double sum){
    if(sum < 0){
        cout << "Negatiivista nostoa ei voi tehda." << endl;
        return false;
    }
    else if(sum > saldo){
        cout << "Nosto on suurempi kuin pankkitlin saldo" << endl;
        return false;
    }
    else{
        saldo -= sum;
        return true;
    }
}
