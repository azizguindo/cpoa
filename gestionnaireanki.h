#ifndef GESTIONNAIREANKI_H
#define GESTIONNAIREANKI_H
#include <vector>
#include "jeudecartes.h"
class GestionnaireAnki
{
private:
    std::vector<JeuDeCartes> lesJeux,lesJeuxAVerifier;

    public:
    GestionnaireAnki();
    void changerDegre();
    JeuDeCartes identifierJeu(std::string nomJeu);
    JeuDeCartes getJeuAVerifier(std::string nomjeu);
    void ajouterJeu(JeuDeCartes j);
    void ajouterJeuAVerifier(JeuDeCartes j);
    void supprimerJeu(JeuDeCartes j);
    void reviserJeu(JeuDeCartes j);
};

#endif // GESTIONNAIREANKI_H
