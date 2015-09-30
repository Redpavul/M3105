/* 
 * File:   Salarie_Exception.cpp
 * Author: reymannp
 * 
 * Created on 30 septembre 2015, 13:47
 */

#include "Salarie_Exception.h"

const char * Salarie_Exception::what() const noexcept{
    return "Exception Salarie";
}
