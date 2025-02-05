#include "notifikaattori.h"

Notifikaattori::Notifikaattori(){
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *seuraajaNimi){
    seuraajat = seuraajaNimi;
    cout << "Notifikaatori lisaa seuraajan " << seuraajaNimi->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *seuraajaNimi){
    cout << "Notifikaatori poistaa seuraajan " << seuraajaNimi->getNimi() << endl;
    seuraajaNimi->next;
}

void Notifikaattori::tulosta(){
    cout << "Notifikaattorin seuraajat:" << endl;
    Seuraaja *seuraajaNimi = seuraajat;
    while(seuraajaNimi != nullptr){
        seuraajaNimi->getNimi();
        cout << "Seuraaja " << seuraajaNimi->getNimi() << endl;
        seuraajaNimi = seuraajaNimi->next;
    }
}

void Notifikaattori::postita(string posti){
    Seuraaja *seuraajaNimi = seuraajat;
    while(seuraajaNimi != nullptr){
        seuraajaNimi->paivitys(posti);
        seuraajaNimi = seuraajaNimi->next;
    }
}
