/* 
 * File:   Conteneur.h
 * Author: reymannp
 *
 * Created on 23 septembre 2015, 13:14
 */

#ifndef CONTENEUR_H
#define	CONTENEUR_H

#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Conteneur {
public:
    static Conteneur<T>* getInstance();
    void ajouter(const T & element);
    void afficher(ostream &) const;
    const T & choisirElement() const;
    
private:
    vector<const T*> m_contenu;
    static Conteneur<T>* m_instance;

protected:
    Conteneur();
    
};

#include "Conteneur.cpp"

#endif	/* CONTENEUR_H */

