/* 
 * File:   Pack.cpp
 * Author: reymannp
 * 
 * Created on 25 septembre 2015, 11:22
 */

#include "Pack.h"

Pack::Pack(string nom): Produit(nom)  {
}

float Pack::getPrix(){
    float s ;
    for(auto prod : m_produits)
    {
       s += prod->getPrix(); 
    }
    return s;
}

void Pack::afficher(ostream& cout){
    for(auto prod : m_produits)
    {
        prod->afficher(cout);
    }
}

void Pack::ajouter(Produit& produit){
    m_produits.push_back(&produit);
}



