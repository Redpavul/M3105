
#include "Trajet.h"

const int Trajet::DISTANCEMIN=1;
const int Trajet::DISTANCEMAX=2000;

Trajet::Trajet(const string villeDep, const string villeArr, int dist) : distance(dist,DISTANCEMIN,DISTANCEMAX) {
    setVilleDepart(villeDep);
    setVilleArrivee(villeArr);
   
}



string Trajet::getVilleDepart() const {
    return villeDepart;
}

void Trajet::setVilleDepart(const string& villeDep) {
    villeDepart = villeDep;
}

string Trajet::getVilleArrivee() const {
    return villeArrivee;
}

void Trajet::setVilleArrivee(const string& villeArr) {
    villeArrivee = villeArr;
}

int Trajet::getDistance() const {
    return distance.getVal();
}

void Trajet::saisir(istream& cin) {
    cin>>villeDepart>>villeArrivee>>distance;
    cin.ignore(256,'\n');
}

void Trajet::afficher(ostream& cout) const {
    cout<<"Ville depart : "<<villeDepart<<" Ville arrivee : "<<villeArrivee<<" Distance : "<<distance;
}
