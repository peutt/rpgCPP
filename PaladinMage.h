#pragma once
#include "Paladin.h"
#include "Mage.h"

class PaladinMage :public Paladin, public Mage{

public:
	PaladinMage();
	void EpeeEnflamme(Personnage cible);
};

