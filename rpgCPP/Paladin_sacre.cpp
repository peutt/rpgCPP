#include "Paladin_sacre.h"

Paladin_sacre::Paladin_sacre() : Paladin() {
    int i;
}
Paladin_sacre::~Paladin_sacre() {}

void Paladin_sacre::invoquerAnge(Personnage& personnage) {
    cout << "J'invoque un ange (81 pv)" << endl;
    personnage.Personnage::perdreVie(81);
}