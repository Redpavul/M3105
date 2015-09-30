#ifndef PROMOTION_H
#define PROMOTION_H
#include <string>
#include <iostream>
#include "NombreContraint.h"
using namespace std;
class Promotion {

private:
    string libelle;
    NombreContraint<float> tauxReduction;
    const static float TAUXMIN;
    const static float TAUXMAX;

public:
    Promotion(const string& unLibelle, float unTaux);

    string getLibelle() const;

    void setLibelle(const string& libelle);

    float calculePrixReduit(float prix) const;

    void saisir(istream& cin);

    void afficher(ostream& cout) const;
};
#endif