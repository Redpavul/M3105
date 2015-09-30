/* 
 * File:   Reservation.cpp
 * Author: reymannp
 * 
 * Created on 25 septembre 2015, 10:52
 */
#include "Reservation.h"

Reservation::Reservation(string nom, int duree, float prix)
: Produit(nom), m_duree(duree, 1, 365), m_prix(prix, 30, 1000) {
}

float Reservation::getPrix() const {
    return m_prix.getVal();
}

void Reservation::afficher(ostream&) {

    cout << "nom : " << m_nom << " prix : " << m_prix << " duree : " << m_duree << endl;
}