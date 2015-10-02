/* 
 * File:   main.cpp
 * Author: reymannp
 *
 * Created on 30 septembre 2015, 13:09
 */

#include <cstdlib>

#include "Salarie.h"
#include "Salarie_Exception.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main() {

    
    try{
        Salarie s1("Hello","012012");
    }
    catch(Salarie_Exception *e){
        cout<<e->what()<<endl;
    }
    
    return 0;
}

