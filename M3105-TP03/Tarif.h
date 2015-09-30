#ifndef TARIF_H
#define TARIF_H
#include <string>
#include "NombreContraint.h"
using namespace std;
        
class Tarif {

private:
    string libelle;
    NombreContraint<float> prixAuKm;
    const static float PRIXMIN;
    const static float PRIXMAX;

public:
    Tarif(const string& unLibelle, float unPrixKilo);

    string getLibelle() const;

    void setLibelle(string libelle);

    float getPrixAuKm() const;

    void saisir(istream& cin);

    void afficher(ostream& cout) const;
};

#endif
