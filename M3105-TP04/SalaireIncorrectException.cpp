/* 
 * File:   SalaireIncorrectException.cpp
 * Author: reymannp
 * 
 * Created on 30 septembre 2015, 14:52
 */

#include "SalaireIncorrectException.h"

SalaireIncorrectException::SalaireIncorrectException(float salaire) : m_salaire(salaire) {}

const char * SalaireIncorrectException::what() const noexcept{
    stringstream s;
    s<<Salarie_Exception::what()<<" -Salaire incorrect : "<<m_salaire ;
    return s.str().c_str();
}
