#pragma once
#include "Personnage.h"
class ListePersonnage
{
private:
    list<Personnage*> players;
    static ListePersonnage* m_characters;
public:
    static ListePersonnage* getInstance();
	virtual list<Personnage*> getList();
	virtual void addPlayer(Personnage* pers);
};

