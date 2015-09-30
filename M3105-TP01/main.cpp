/* 
 * File:   main.cpp
 * Author: reymannp
 *
 * Created on 9 septembre 2015, 12:52
 */

#include <cstdlib>
#include "NombreContraint.h"
//#include "EntierContraint.h"

using namespace std;

/*
 * 
 */
int main() {

    float a = 3.2;
    float b = 2.4;
    int c = 7;

    try{
        NombreContraint<float> e2 (a,b,c);
        cin >> e2;
        cout << e2;
        
       

    }
    catch(char const * erreur){
        cout << "Test OK : exception levée : " << erreur 
<< endl ; 
        
    }
    


    
    return {0};
}

