#pragma once

using namespace std;

#include <iostream>
#include <string>
#include <vector>

#include "Arme.h"


class Personnage {   

protected:
    bool alive = true; // vivant ?
    string RIP; // Nom perso
    string pain; // Nom perso
    string death; // Nom perso
    int physicalRes = 0; // PV max
    int magicalRes = 0; // PV courant
    int m_vie;
    int m_vie_max;
    int m_potion;
    int m_puissanceAttaque;
    int m_x;
    int m_y;
    vector<Arme> armeListe;
    Arme armeActuelle;
    string m_nom;
public:
    Personnage();
    Personnage(string, int, int);

    void attaquer(Personnage cible);
    void boirePotion(int);
    void changerArme(string, int puissance, int porte);
    void deplace(int x, int y);

    //setters
    void gagnerVie(int);
    void perdreVie(int);

    //getters
    int getX();
    int getY();
    string getNom();
};