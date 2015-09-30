/* 
 * File:   Produit.h
 * Author: reymannp
 *
 * Created on 25 septembre 2015, 10:36
 */

#ifndef PRODUIT_H
#define	PRODUIT_H
#include <iostream>
#include <string>
using namespace std;

class Produit {
public:
    Produit(string nom);
    virtual float getPrix() const = 0;
    virtual void afficher(ostream& cout);
    virtual void ajouter(Produit & produit );
protected:
    string m_nom;

};

#endif	/* PRODUIT_H */

