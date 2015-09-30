#include "Billet.h"


Billet::Billet(const Trajet& untrajet, const Tarif& untarif):m_tarif(untarif), m_trajet(untrajet)
{}

const Trajet& Billet::getTrajet() const {
    return m_trajet;
}

const Tarif& Billet::getTarif() const {
    return m_tarif;
}

float Billet::getPrix() const {
    return m_trajet.getDistance()* m_tarif.getPrixAuKm();
}

void Billet::afficher(ostream& cout) const {
    cout<<m_trajet.getVilleDepart()<<" à "<<m_trajet.getVilleArrivee()<<" pour "<<this->getPrix()<<"€";
}
