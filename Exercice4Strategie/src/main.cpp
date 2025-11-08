#include <iostream>
#include <vector>
#include <string>
#include "GestionnaireTri.h"
#include "TriCroissant.h"
#include "TriDecroissant.h"
#include "TriParLongueur.h"

int main() {
    std::vector<std::string> noms = {"Alice", "Bob", "Claire", "David"};

    // Création des stratégies
    TriCroissant croissant;
    TriDecroissant decroissant;
    TriParLongueur parLongueur;

    // Gestionnaire de tri
    GestionnaireTri gestionnaire;

    std::cout << "Tri croissant:" << std::endl;
    gestionnaire.setStrategie(&croissant);
    gestionnaire.executerTri(noms);
    for (const auto& n : noms) std::cout << n << " ";
    std::cout << std::endl;

    std::cout << "Tri décroissant:" << std::endl;
    gestionnaire.setStrategie(&decroissant);
    gestionnaire.executerTri(noms);
    for (const auto& n : noms) std::cout << n << " ";
    std::cout << std::endl;

    std::cout << "Tri par longueur:" << std::endl;
    gestionnaire.setStrategie(&parLongueur);
    gestionnaire.executerTri(noms);
    for (const auto& n : noms) std::cout << n << " ";
    std::cout << std::endl;

    return 0;
}
