#pragma once
#include "Forme.h"

class Cercle : public Forme {
public:
    void afficher() override { std::cout << "Cercle\n"; }
};
class Carre : public Forme {
public:
    void afficher() override { std::cout << "Carré\n"; }
};
class Triangle : public Forme {
public:
    void afficher() override { std::cout << "Triangle\n"; }
};
