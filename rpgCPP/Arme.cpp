#include "Arme.h"

Arme::Arme() {

}

Arme::Arme(string weaponName, int power, int range) {
    _weaponName = weaponName;
    _power = power;
    _range = range;
}

Arme::~Arme()
{}