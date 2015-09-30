/* 
 * File:   NomIncorrectException.cpp
 * Author: reymannp
 * 
 * Created on 30 septembre 2015, 14:18
 */

#include "NomIncorrectException.h"

NomIncorrectException::NomIncorrectException(string nom) : m_nom(nom) {}

const char * NomIncorrectException::what() const noexcept{
    stringstream s;
    s<<Salarie_Exception::what()<<" -Nom incorrect : "<<m_nom ;
    return s.str().c_str();
}




