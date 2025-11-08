#pragma once
#include "FormesConcretes.h"
#include <string>

class FabriqueForme {
public:
    static Forme* creerForme(const std::string& type) {
        if(type == "Cercle") return new Cercle();
        else if(type == "Carre") return new Carre();
        else if(type == "Triangle") return new Triangle();
        return nullptr;
    }
};
