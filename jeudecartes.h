#ifndef JEUDECARTES_H
#define JEUDECARTES_H
#include<vector>
#include "carte.h"
class JeuDeCartes
{
private:
    std::vector<Carte> lesCartes;
    std::string nom;
public:
    JeuDeCartes(std::string name);
    void ajouterCarte(Carte const &);
    Carte getCarte(std::string const &);
    inline  std::vector<Carte>getCartes(){return this->lesCartes; }
    std::string getQuestion(int noCarte);
    std::string getReponse(int noCarte);
    void miseAJour(int noCarte,int degre);
};

#endif // JEUDECARTES_H
