#pragma once
#ifndef CPP_MAGE_GLACE_H
#define CPP_MAGE_GLACE_H

#include "Personnage.h"

class Mage_glace : virtual public Personnage {
public:
    Mage_glace(string, int, int);
    virtual ~Mage_glace();
    void lanceGlace(Personnage&);
};


#endif //CPP_MAGE_GLACE_H
