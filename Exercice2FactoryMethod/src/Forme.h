#pragma once
#include <iostream>
#include <string>

class Forme {
public:
    virtual void afficher() = 0; // Méthode virtuelle pure
    virtual ~Forme() = default;
};
