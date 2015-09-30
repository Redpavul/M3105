#include "BilletReduit.h"

BilletReduit::BilletReduit(const Trajet& unTrajet, const Tarif& unTarif, const Promotion& unePromo) :
Billet::Billet(unTrajet,unTarif), promotion(unePromo){}

float BilletReduit::getPrix() const {
    return promotion.calculePrixReduit(Billet::getPrix());
}

const Promotion& BilletReduit::getPromotion() const {
    return this->promotion;
}
