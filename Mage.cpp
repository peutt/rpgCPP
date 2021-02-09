#include "Mage.h"

Mage::Mage() : Personnage() {
    this->m_nom = "Mage";
    this->pain = "ça pique";
    this->death = "ma flamme s'etein";
    this->magicalRes = 15;
    this->physicalRes = 20;
    this->RIP = "    le mage brulera en enfer.    ";
    m_x = 0;
    m_y = 0;
    m_vie = 200;
    m_vie_max = m_vie;
    m_potion = 20;
    changerArme("poing", 30, 0);
    cout << "+---------------Mage-----------------+" << endl;
    cout << "| " << this->m_nom << " exist " << endl;
    cout << "+----------------------------------------+" << endl;
}

Mage::~Mage() {}

void Mage::fireball(Personnage cible) {
    cout << "Je lance une boule de feuuuu (20pv)" << endl;
    cible.Personnage::perdreVie(20);
}