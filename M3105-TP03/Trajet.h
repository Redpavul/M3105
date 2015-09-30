#ifndef TRAJET_H
#define TRAJET_H

#include <string>
#include "NombreContraint.h"
using namespace std;

class Trajet {

private:
    string villeDepart;
    string villeArrivee;
    NombreContraint<int> distance;
    const static int DISTANCEMIN;
    const static int DISTANCEMAX;

public:
    Trajet(const string villeDep ="Grenoble", const string villeArr="Annecy", int dist=200);

    string getVilleDepart() const;

    void setVilleDepart(const string& villeDep);

    string getVilleArrivee() const;

    void setVilleArrivee(const string& villeArr);

    int getDistance() const;

    void saisir(istream& cin);

    void afficher(ostream& cout) const;
};

#endif
