#include "FabriqueForme.h"
#include <iostream>

int main() {
    Forme* f = FabriqueForme::creerForme("cercle");
    if(f) f->afficher();

    delete f;
    return 0;
}
