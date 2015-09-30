/* 
 * File:   Pack.h
 * Author: reymannp
 *
 * Created on 25 septembre 2015, 11:22
 */

#ifndef PACK_H
#define	PACK_H
#include "Produit.h"
#include <vector>
#include <string>

using namespace std;

class Pack : public Produit{
public:
    Pack(string nom);
    float getPrix();
    void afficher(ostream& cout);
    void ajouter(Produit & produit);
    
private:
    vector<Produit*> m_produits ;
};

#endif	/* PACK_H */

