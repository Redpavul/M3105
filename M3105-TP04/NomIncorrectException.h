/* 
 * File:   NomIncorrectException.h
 * Author: reymannp
 *
 * Created on 30 septembre 2015, 14:18
 */

#ifndef NOMINCORRECTEXCEPTION_H
#define	NOMINCORRECTEXCEPTION_H

#include "Salarie_Exception.h"
using namespace std;

class NomIncorrectException : public Salarie_Exception{
private:
    string m_nom;
public:
    NomIncorrectException(string nom);
    const char * what() const noexcept;
};

#endif	/* NOMINCORRECTEXCEPTION_H */

