/* 
 * File:   NombreContraint.cpp
 * Author: reymannp
 * 
 * Created on 11 septembre 2015, 10:28
 */

#ifdef NOMBRECONTRAINT_H

template <class TypeNumerique>
NombreContraint<TypeNumerique>::NombreContraint(TypeNumerique valeur, TypeNumerique min , TypeNumerique max)
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
template <class TypeNumerique>
TypeNumerique NombreContraint<TypeNumerique>::getMin() const{
    return m_min;
}
template <class TypeNumerique>
TypeNumerique NombreContraint<TypeNumerique>::getMax() const{
    return m_max;
}
template <class TypeNumerique>
TypeNumerique NombreContraint<TypeNumerique>::getVal() const{
    return m_val;
}
template <class TypeNumerique>
void NombreContraint<TypeNumerique>::setVal(TypeNumerique val){
    if(m_min<=val && m_max>=val)
    {
        m_val=val;
    }
    else
    {
        throw "error" ;
    }
}

template <class TypeNumerique>
void NombreContraint<TypeNumerique>::saisir(istream& cin) {
    cin>>m_min>>m_max>>m_val;
    cin.ignore(256,'\n');
}

template <class TypeNumerique>
void NombreContraint<TypeNumerique>::afficher(ostream& cout) const {
    cout<<m_min<<" "<<m_max<<" "<<m_val;
}

template <class TypeNumerique>
NombreContraint<TypeNumerique>::operator NombreContraint() {
    return m_val;
}

template <class TypeNumerique>
ostream& operator <<(ostream& cout, const NombreContraint<TypeNumerique> & n){
    n.afficher(cout);
    return cout;
}


template <class TypeNumerique> 
istream& operator >>(istream& cin , NombreContraint<TypeNumerique> & n){
    n.saisir(cin);
    return cin;
}

#endif