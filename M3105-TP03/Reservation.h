/* 
 * File:   Reservation.h
 * Author: reymannp
 *
 * Created on 25 septembre 2015, 10:52
 */

#ifndef RESERVATION_H
#define	RESERVATION_H
#include <string>
#include <iostream>
#include "NombreContraint.h"
#include "Produit.h"

using namespace std;

class Reservation : public Produit {
public:
    Reservation(string nom, int duree, float prix);
    float getPrix() const;
    void afficher(ostream&);
    
private:
    NombreContraint<int> m_duree;
    NombreContraint<float> m_prix;
    

};

#endif	/* RESERVATION_H */

