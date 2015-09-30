/* 
 * File:   EntierContraint.cpp
 * Author: reymannp
 * 
 * Created on 9 septembre 2015, 12:54
 */

#include "EntierContraint.h"

EntierContraint::EntierContraint(int valeur, int min , int max)
{
    if(max>min)
    {
        m_min=min,m_max=max;
        setVal(valeur);
    }
    else
    {
        throw "error" ;
    }

    
}

int EntierContraint::getMin() const{
    return m_min;
}

int EntierContraint::getMax() const{
    return m_max;
}

int EntierContraint::getVal() const{
    return m_val;
}

void EntierContraint::setVal(int val){
    if(m_min<=val && m_max>=val)
    {
        m_val=val;
    }
    else
    {
        throw "error" ;
    }
}

void EntierContraint::saisir(istream& cin) {
    cin>>m_min>>m_max>>m_val;
    cin.ignore(256,'\n');
}

void EntierContraint::afficher(ostream& cout) const {
    cout<<m_min<<" "<<m_max<<" "<<m_val;
}

EntierContraint::operator int() {
    return m_val;
}

ostream& operator << (ostream& cout, const EntierContraint & n){
    n.afficher(cout);
    return cout;
}

istream& operator >> (istream& cin , EntierContraint & n){
    n.saisir(cin);
    return cin;
}




