#include "Mage_glace.h"

Mage_glace::Mage_glace(string name, int x, int y) : Personnage(name, x, y) {
    int m_x;
    int m_y;
    m_nom = name;
}

Mage_glace::~Mage_glace() {}

void Mage_glace::lanceGlace(Personnage& personnage) {
    cout << "Je suis un glacobarbare ! (70pv)" << endl;
    personnage.Personnage::perdreVie(70);
}