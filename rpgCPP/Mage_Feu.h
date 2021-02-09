#pragma once
#ifndef CPP_MAGE_FEU_H
#define CPP_MAGE_FEU_H

#include "Personnage.h"

class Mage_Feu : virtual public Personnage {
public:
    Mage_Feu(string, int, int);
    virtual ~Mage_Feu();
    void lanceFlamme(Personnage&);
};

#endif //CPP_MAGE_FEU_H