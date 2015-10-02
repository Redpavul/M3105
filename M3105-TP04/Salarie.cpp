/* 
 * File:   Salarie.cpp
 * Author: reymannp
 * 
 * Created on 30 septembre 2015, 13:16
 */

#include "Salarie.h"
#include "Salarie_Exception.h"
#include "NomIncorrectException.h"
#include "NumeroIncorrectException.h"
#include "SalaireIncorrectException.h"



Salarie::Salarie(string nom, string numSS, float salaire): m_nom(nom), m_numeroSS(numSS), m_salaireMensuel(salaire) {}


Salarie::Salarie(){
    throw new NomIncorrectException(" ");
}

Salarie::Salarie(string nom) {
    throw new NumeroIncorrectException(" ");
}

Salarie::Salarie(string nom, string numSS){
    throw new SalaireIncorrectException(0);
}

string Salarie::getNom() const{
    return m_nom;
}

string Salarie::getNumeroSS() const{
    return m_numeroSS;
}

float Salarie::getSalaireMensuel() const{
    return m_salaireMensuel  ;
}

float Salarie::getImpots() const{
    float temp = this->getSalaireMensuel()*12;
    if(temp<60000)
        return 0;
    else if (temp<12000)
        return (temp/100)*5.5;
    else if (temp<26600)
        return (temp/100)*14;
    else if (temp<71400)
        return (temp/100)*30;
    else
        return (temp/100)*41;
    
}

void Salarie::setNom(string nom){
    m_nom=nom;
}


void Salarie::setNumeroSS(string numeroSS) {
    m_numeroSS=numeroSS;
}

void Salarie::setSalaireMensuel(float salaireMensuel) {
    m_salaireMensuel=salaireMensuel;
}



