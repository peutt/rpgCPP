#include "ListePersonnage.h"

ListePersonnage* ListePersonnage::m_characters = nullptr;

ListePersonnage* ListePersonnage::getInstance()
{
    if (m_characters == nullptr) {
        m_characters = new ListePersonnage();
    }
    return m_characters;
}

list<Personnage*> ListePersonnage::getList()
{
    return players;
}

void ListePersonnage::addPlayer(Personnage* pers)
{
    players.push_back(pers);
}
