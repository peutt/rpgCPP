#include "Mage_Feu.h"

Mage_Feu::Mage_Feu(string name, int x, int y) : Personnage(name, x, y) {
    int m_x;
    int m_y;
    m_nom = name;
}

Mage_Feu::~Mage_Feu() {}

void Mage_Feu::lanceFlamme(Personnage& personnage) {
    cout << "Je suis un pyrobarbare ! (70pv)" << endl;
    personnage.Personnage::perdreVie(70);
}