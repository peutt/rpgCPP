#pragma once
#ifndef CPP_PALADIN_DECHU_H
#define CPP_PALADIN_DECHU_H


#include "paladin.h"

class Paladin_dechu : public Paladin {
public:
    Paladin_dechu();
    virtual ~Paladin_dechu();
    void invoquerDemon(Personnage&);
};


#endif //CPP_PALADIN_DECHU_H