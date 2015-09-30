/* 
 * File:   SalaireIncorrectException.h
 * Author: reymannp
 *
 * Created on 30 septembre 2015, 14:52
 */

#ifndef SALAIREINCORRECTEXCEPTION_H
#define	SALAIREINCORRECTEXCEPTION_H

#include "Salarie_Exception.h"
using namespace std;

class SalaireIncorrectException : public Salarie_Exception {
public:
    SalaireIncorrectException(float salaire);
    const char * what() const noexcept;
private:
    float m_salaire;

};

#endif	/* SALAIREINCORRECTEXCEPTION_H */

