#pragma once
using namespace std;

#include <iostream>
#include <string>
#include <list>

class Arme {
private:
    int _power;
    string _weaponName;
    int _range;
public:
    Arme();
    Arme(string, int, int);
    ~Arme();
    int getDamage() { return(this->_power); }
    int getRange() { return(this->_range); }
    string getWeaponName() { return(this->_weaponName); }
};