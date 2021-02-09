#pragma once
#ifndef CPP_MAGE_H
#define CPP_MAGE_H

#include "Personnage.h"
#include "Mage_glace.h"
#include "Mage_Feu.h"

class Mage : public virtual Personnage {
public:
    Mage();
    virtual ~Mage();
    void fireball(Personnage cible);
};

#endif //CPP_MAGE_H

