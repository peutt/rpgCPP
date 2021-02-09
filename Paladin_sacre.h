#pragma once
#ifndef CPP_PALADIN_SACRE_H
#define CPP_PALADIN_SACRE_H

#include "paladin.h"


class Paladin_sacre : public Paladin {
public:
    Paladin_sacre();
    virtual ~Paladin_sacre();
    void invoquerAnge(Personnage&);
};


#endif //CPP_PALADIN_SACRE_H


