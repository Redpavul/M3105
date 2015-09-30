/* 
 * File:   Client.h
 * Author: reymannp
 *
 * Created on 18 septembre 2015, 11:22
 */

#ifndef CLIENT_H
#define	CLIENT_H

#include <string>
#include <vector>
#include "Billet.h"
using namespace std;

class Client{
private :
        
        string nom;
        vector<const Billet*> mesBillets;
        
public:
    
        Client(const string name);
        
        string getNom() const;
        
        const vector<const Billet*>& getMesBillets() const;
        
        void addBillets(Billet & bill);
        
        void afficher();
        
        
};


#endif	
