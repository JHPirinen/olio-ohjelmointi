#include "seuraaja.h"

Seuraaja::Seuraaja(string seuraajaNimi){
    nimi = seuraajaNimi;
    cout << "Luodaan seuraaja " << nimi << endl;
}

string Seuraaja::getNimi(){
    return nimi;
}

void Seuraaja::paivitys(string posti){
    cout << "Seuraaja " << nimi << " sai viestin " << posti << endl;
}
