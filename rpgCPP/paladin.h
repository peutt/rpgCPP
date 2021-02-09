#pragma once
#ifndef CPP_PALADIN_H
#define CPP_PALADIN_H

#include "Personnage.h"


class Paladin : public virtual Personnage {
public:
    Paladin();
    virtual ~Paladin();
    void PrierLEternel();
};


#endif //CPP_PALADIN_H

