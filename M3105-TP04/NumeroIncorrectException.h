/* 
 * File:   NumeroIncorrectException.h
 * Author: reymannp
 *
 * Created on 30 septembre 2015, 14:47
 */

#ifndef NUMEROINCORRECTEXCEPTION_H
#define	NUMEROINCORRECTEXCEPTION_H

#include "Salarie_Exception.h"
using namespace std;

class NumeroIncorrectException : public Salarie_Exception{
public:
    NumeroIncorrectException(string m_num);
    const char * what() const noexcept;
private:
    string m_num;
};

#endif	/* NUMEROINCORRECTEXCEPTION_H */

