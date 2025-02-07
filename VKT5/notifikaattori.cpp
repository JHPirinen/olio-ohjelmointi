#include "notifikaattori.h"

Notifikaattori::Notifikaattori(){
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja *seuraajaNimi){
    seuraajaNimi->next = seuraajat;
    seuraajat = seuraajaNimi;
    cout << "Notifikaatori lisaa seuraajan " << seuraajaNimi->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *seuraajaNimi){
    cout << "Notifikaatori poistaa seuraajan " << seuraajaNimi->getNimi() << endl;
    if(seuraajaNimi == seuraajat){
        seuraajat = seuraajat->next;
    }
    else{
        Seuraaja *edellinen = seuraajat;
        while(edellinen != nullptr){
            if(edellinen->next == seuraajaNimi){
                edellinen->next = seuraajaNimi->next;
            }
            edellinen = edellinen->next;
        }
    }
}

void Notifikaattori::tulosta(){
    cout << "Notifikaattorin seuraajat:" << endl;
    Seuraaja *edellinen = seuraajat;
    while(edellinen != nullptr){
        edellinen->getNimi();
        cout << "Seuraaja " << edellinen->getNimi() << endl;
        edellinen = edellinen->next;
    }
}

void Notifikaattori::postita(string posti){
    Seuraaja *edellinen = seuraajat;
    while(edellinen != nullptr){
        edellinen->paivitys(posti);
        edellinen = edellinen->next;
    }
}
