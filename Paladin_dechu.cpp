#include "Paladin_dechu.h"

Paladin_dechu::Paladin_dechu() : Paladin() {
    int m_x;
    int m_y;
    
}
Paladin_dechu::~Paladin_dechu() {}

void Paladin_dechu::invoquerDemon(Personnage& personnage) {
    cout << "J'invoque un demon (80 pv)" << endl;
    personnage.Personnage::perdreVie(80);
}