#include "Tarif.h"

const float Tarif::PRIXMIN=0.01;
const float Tarif::PRIXMAX=10;

Tarif::Tarif(const string& unLibelle, float unPrixKilo) : prixAuKm(unPrixKilo,PRIXMIN,PRIXMAX) {
    setLibelle(unLibelle);

}

string Tarif::getLibelle() const {
    return libelle;
}

void Tarif::setLibelle(string libelle) {
    this->libelle = libelle;
}

float Tarif::getPrixAuKm() const {
    return prixAuKm.getVal();
}

void Tarif::saisir(istream& cin) {
    cin>>libelle>>prixAuKm;
    cin.ignore(256,'\n');
}

void Tarif::afficher(ostream& cout) const {
    cout<<"Libelle : "<<libelle<<" Prix au km : "<<prixAuKm;
}
