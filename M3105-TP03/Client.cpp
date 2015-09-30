/* 
 * File:   Client.cpp
 * Author: reymannp
 * 
 * Created on 18 septembre 2015, 11:30
 */

#include "Client.h"



Client::Client(const string name) : nom(name) {}

string Client::getNom() const{
    return nom;
}

const vector<const Billet*>& Client::getMesBillets() const{
    
    return mesBillets;
}

void Client::addBillets(Billet & bill){
    
    mesBillets.push_back(&bill);
}

void Client::afficher()
{
    cout<< nom;
}

