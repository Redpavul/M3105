#ifndef BILLETREDUIT_H
#define BILLETREDUIT_H
#include "Promotion.h"
#include "Tarif.h"
#include "Trajet.h"
#include "Billet.h"

class BilletReduit : public Billet {

private:
    const Promotion& promotion; 
    
public:
    

    BilletReduit(const Trajet& unTrajet, const Tarif& unTarif, const Promotion& unePromo) ;

    float getPrix() const;

    const Promotion& getPromotion() const;
};

#endif
