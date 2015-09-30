#ifndef SALARIE_EXCEPTION_H
#define	SALARIE_EXCEPTION_H

#include <exception>
#include <string>
#include <sstream>

using namespace std;

class Salarie_Exception : public exception {
public : 
    virtual const char * what() const noexcept ;
};




#endif	/* SALARIE_EXCEPTION_H */

