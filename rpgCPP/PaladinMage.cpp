#include "PaladinMage.h"

PaladinMage::PaladinMage():Paladin(),Mage(){
    this->m_nom = "PaladinMage";
    this->pain = "sainte merde enflammé !";
    this->death = "je m'imole par le feu";
    this->magicalRes = 15;
    this->physicalRes = 20;
    this->RIP = "    Le paladin-mage est mort par les flammes loué soit-il.    ";
    m_x = 0;
    m_y = 0;
    m_vie = 200;
    m_vie_max = m_vie;
    m_potion = 20;
    changerArme("poing", 50, 0);
    cout << "+---------------Paladin-Mage-----------------+" << endl;
    cout << "| " << this->m_nom << " exist " << endl;
    cout << "+----------------------------------------+" << endl;
}

void PaladinMage::EpeeEnflamme(Personnage cible)
{
    Personnage::changerArme("Epée enflammé", 70, 2);
    Personnage::attaquer(cible);
}
