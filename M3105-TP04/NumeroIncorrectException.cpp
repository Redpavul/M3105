/* 
 * File:   NumeroIncorrectException.cpp
 * Author: reymannp
 * 
 * Created on 30 septembre 2015, 14:47
 */

#include "NumeroIncorrectException.h"

NumeroIncorrectException::NumeroIncorrectException(string num) : m_num(num) {}

const char * NumeroIncorrectException::what() const noexcept{
    stringstream s;
    s<<Salarie_Exception::what()<<" -Numero incorrect : "<<m_num ;
    return s.str().c_str();
}
