#include <iostream>
#include "Personnage.h"
#include "paladin.h"
#include "Paladin_dechu.h"
#include "Paladin_sacre.h"
#include "Mage.h"
#include "Mage_Feu.h"
#include "ListePersonnage.h"
#include "Mage_glace.h"
#include "PaladinMage.h"

int main() {
    Personnage david, goliath, boloss;

    //Création de 2 objets de type Personnage : david et goliath
    goliath.attaquer(david); //goliath attaque david
    david.boirePotion(20); //david récupère 20 de vie en buvant une potion
    goliath.attaquer(david); //goliath réattaque david
    goliath.deplace(0, 1);
    david.attaquer(goliath); //david contre-attaque
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40, 2); //goliath change d'arme
    goliath.attaquer(david); //goliath attaque david
    

    

    Paladin patrick;
    patrick.attaquer(boloss);
    patrick.PrierLEternel();
    Mage gandulf;
    gandulf.attaquer(boloss);
    gandulf.fireball(goliath);
    PaladinMage Francis;
    Francis.attaquer(boloss);
    Francis.PrierLEternel();
    Francis.fireball(patrick);
    Francis.EpeeEnflamme(gandulf);
    /*
    Paladin_dechu belzebuth("Richard", 20, 10);
    Paladin_sacre augustin("Augustin", 15, 15);
    Mage gandulf("Gandulf", 50, 50);

    //Charger et donner Arme
    patrick.nouvelleArme("Hache Tranchante", 50, 16);
    belzebuth.nouvelleArme("Masse demoniaque", 100, 30);
    augustin.nouvelleArme("Masse angélique", 100, 30);

    // Round 1 - Demon Attack
    cout << "ROUND 1" << endl;
    belzebuth.invoquerDemon(patrick);
    belzebuth.attaquer(patrick);

    //Round 2 - Ange contre-attaque
    cout << "ROUND 2" << endl;
    augustin.prier();
    augustin.invoquerAnge(belzebuth);
    augustin.attaquer(belzebuth);

    // Round 3 - Switch
    cout << "ROUND 3" << endl;
    belzebuth.nouvelleArme("Arme démoniaque sans nom", 1, 1);
    belzebuth.changerArme("Masse demoniaque");
    augustin.nouvelleArme("Lyre foudroyante", 400, 400);

    // Round 4
    cout << "ROUND 4" << endl;
    belzebuth.prier();
    belzebuth.invoquerDemon(patrick);
    belzebuth.attaquer(patrick);

    // Round 5
    cout << "ROUND 5" << endl;
    gandulf.nouvelleArme("Sceptre sacré", 10, 100);
    gandulf.lanceFlamme(belzebuth);
    gandulf.lanceGlace(augustin);
    gandulf.fireball(patrick);
    */
    return 0;
}