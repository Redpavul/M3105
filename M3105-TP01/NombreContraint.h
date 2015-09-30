/* 
 * File:   NombreContraint.h
 * Author: reymannp
 *
 * Created on 11 septembre 2015, 10:28
 */

#ifndef NOMBRECONTRAINT_H
#define	NOMBRECONTRAINT_H
#include<iostream> 

using namespace std;

template <class TypeNumerique>
class NombreContraint {
public:
    //void NombreContraint(TypeNumerique nb);
    NombreContraint(TypeNumerique valeur=0, TypeNumerique min=0, TypeNumerique max=100);
    TypeNumerique getMin() const;
    TypeNumerique getMax() const;
    TypeNumerique getVal() const;
    void setVal(TypeNumerique val);
    void saisir(istream & cin = std::cin);
    void afficher(ostream & cout = std::cout) const;
    operator NombreContraint();
    
    /*friend 
    friend template <class TypeNumerique> istream& operator >> (istream& cin , NombreContraint<TypeNumerique> & n);
    */
private:
    TypeNumerique m_min;
    TypeNumerique m_max;
    TypeNumerique m_val;
};

template <class TypeNumerique> ostream& operator << (ostream& cout, const NombreContraint<TypeNumerique> & n);
template <class TypeNumerique> istream& operator >> (istream& cin , NombreContraint<TypeNumerique> & n);
#include "NombreContraint.cpp"
#endif	/* NOMBRECONTRAINT_H */

