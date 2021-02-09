#pragma once
#include "Personnage.h"

class ListePersonnage;


template <typename T>
class ChefDeTribu : public T
{
public:
	ChefDeTribu();
	void AttaqueDeTribu(Personnage target);

};

template <typename T>
inline ChefDeTribu<typename T>::ChefDeTribu()
{
	this->m_vie_max = this->m_vie_max * 2;
	this->m_vie = this->m_vie_max;
	this->m_puissanceAttaque = this->m_puissanceAttaque * 2;
}

template <typename T>
void ChefDeTribu<typename T>::AttaqueDeTribu(Personnage target)
{
	cout << "+----------------------------------------+" << endl;
	cout << "| " << this->m_nom << " Attaque avec toute sa race" << endl;
	cout << "+             --------------" << endl;
	list<Personnage*> chars = ListePersonnage::getInstance()->getList();
	for (list<Personnage*>::iterator it = chars.begin(); it != chars.end(); ++it)
	{
		if ((*it)->getNom() == this->m_nom)
		{
			(*it)->attaquer(target);
		}
	}
}