#include "paladin.h"

Paladin::Paladin() : Personnage() {
    this->m_nom = "Paladin";
    this->pain = "sainte merde !";
    this->death = "allah akbar";
    this->magicalRes = 15;
    this->physicalRes = 20;
    this->RIP = "    Le paladin est mort loué soit-il.    ";
    m_x = 0;
    m_y = 0;
    m_vie = 200;
    m_vie_max = m_vie;
    m_potion = 20;
    changerArme("poing", 40, 0);
    cout << "+---------------Paladin-----------------+" << endl;
    cout << "| " << this->m_nom << " exist " << endl;
    cout << "+----------------------------------------+" << endl;
}

Paladin::~Paladin() {}

void Paladin::PrierLEternel() {
    cout << "Je prie (40 pv)" << endl;
    Personnage::gagnerVie(40);
}
