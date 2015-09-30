/* 
 * File:   Produit.cpp
 * Author: reymannp
 * 
 * Created on 25 septembre 2015, 10:36
 */

#include "Produit.h"

Produit::Produit(string nom): m_nom(nom) {}

void Produit::ajouter(Produit& produit){
    throw "Ajout impossible";
}

void Produit::afficher(ostream& cout){
    cout<<m_nom<<endl;
}

