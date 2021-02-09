#include "Personnage.h"
#include "ListePersonnage.h"

#include <math.h>


Personnage::Personnage() {
    m_x = 0;
    m_y = 0;
    m_vie = 200;
    m_vie_max = m_vie;
    m_potion = 20;
    changerArme("poing", 20, 0);
    ListePersonnage::getInstance()->addPlayer(this);
}

Personnage::Personnage(string nom, int x, int y) {
    m_nom = nom;
    m_vie = 200;
    m_vie_max = m_vie;
    m_potion = 20;
    m_puissanceAttaque = 30;
}

void Personnage::attaquer(Personnage personnage) {
    int damage = armeActuelle.getDamage();
    

    float distance;
    list<Personnage*> chars = ListePersonnage::getInstance()->getList();
    for (list<Personnage*>::iterator it = chars.begin(); it != chars.end(); ++it)
    {
        distance = sqrt((((*it)->getX() - m_x) * ((*it)->getX() - m_x)) + (((*it)->getY() - m_y) * ((*it)->getY() - m_y)));
        if ((*it) == this) {
            distance = armeActuelle.getRange() + 1;
        }
        if (distance <= armeActuelle.getRange())
        {
            (*it)->perdreVie(damage);
        }
    }
    distance= sqrt(((personnage.getX() - m_x) * (personnage.getX() - m_x)) + ((personnage.getY() - m_y) * (personnage.getY() - m_y)));
    if (distance > armeActuelle.getRange()) {
        cout << "Ton arme est trop petite !" << endl;
    }

}

void Personnage::boirePotion(int) {
    gagnerVie(m_potion);

}

void Personnage::gagnerVie(int valeur) {
    m_vie += valeur;
    if (m_vie > m_vie_max) {
        m_vie = m_vie_max;
    }
    cout << "Je me soigne :" << valeur << " et j'ai :" << m_vie << " pv" << endl;

}

void Personnage::perdreVie(int valeur) {
    if (m_vie - valeur < 0) {
        m_vie = 0;
    }
    else {
        m_vie -= valeur;
    }
    cout << "Je perds :" << valeur << " et j'ai :" << m_vie << " pv" << endl;

}


void Personnage::changerArme(string weapon, int puissance, int porte)
{
    Arme arme(weapon, puissance, porte);
    armeListe.push_back(arme);
    armeActuelle = arme;
    cout << this->m_nom << " utilise " << weapon << endl;
}

void Personnage::deplace(int x, int y)
{
    cout << this->m_nom << " se déplace" << endl;
    m_x = x;
    m_y = y;
}

string Personnage::getNom() {
    return m_nom;
}
int Personnage::getX() {
    return m_x;
}
int Personnage::getY() {
    return m_y;
}