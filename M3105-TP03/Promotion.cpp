#include "Promotion.h"

const float Promotion::TAUXMIN=0.01;
const float Promotion::TAUXMAX=0.99;


Promotion::Promotion(const string& unLibelle, float unTaux) : tauxReduction(unTaux,TAUXMIN,TAUXMAX) {
    setLibelle(libelle);
}

string Promotion::getLibelle() const {
    return libelle;
}

void Promotion::setLibelle(const string& libelle) {
    this->libelle = libelle;
}

float Promotion::calculePrixReduit(float prix) const {
    return prix*tauxReduction.getVal();
}

void Promotion::saisir(istream& cin) {
    cin>>libelle>>tauxReduction;
}

void Promotion::afficher(ostream& cout) const {
    cout<<"Libelle : "<< libelle <<" taux de reduc : "<<tauxReduction;;
}
