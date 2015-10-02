#ifndef SALARIE_H
#define	SALARIE_H
#include <string>
using namespace std;

class Salarie {
public:
    Salarie(string nom, string numSS, float salaire);
    Salarie();
    Salarie(string nom);
    Salarie(string nom, string numSS);
    
    string getNom() const ;
    string getNumeroSS() const ;
    float getSalaireMensuel() const;
    float getImpots() const;
    
    void setNom(string nom);
    void setNumeroSS(string numeross);
    void setSalaireMensuel(float salaireMensuel);
       
private:
    
    string m_nom;
    string m_numeroSS;
    float m_salaireMensuel;
    
};

#endif	/* SALARIE_H */