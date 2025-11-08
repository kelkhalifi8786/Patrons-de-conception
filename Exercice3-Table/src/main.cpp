#include "TableHachage.h"
#include <iostream>

int main() {
    TableHachage th(5);

    th.inserer(1, "Alice");
    th.inserer(6, "Bob");
    th.inserer(11, "Charlie");

    std::cout << "Recherche clé 6: " << th.rechercher(6) << std::endl;

    th.afficher();

    th.supprimer(6);
    std::cout << "Après suppression clé 6:" << std::endl;
    th.afficher();

    return 0;
}
