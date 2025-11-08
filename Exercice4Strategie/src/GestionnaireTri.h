#ifndef GESTIONNAIRE_TRI_H
#define GESTIONNAIRE_TRI_H

#include "StrategieTri.h"
#include <vector>
#include <string>
#include <iostream>

class GestionnaireTri {
private:
    StrategieTri* strategie; // stratégie actuelle
public:
    GestionnaireTri(StrategieTri* strat = nullptr) : strategie(strat) {}

    void setStrategie(StrategieTri* strat) {
        strategie = strat;
    }

    void trier(std::vector<std::string>& data) {
        if (!strategie) {
            std::cerr << "Aucune stratégie définie !" << std::endl;
            return;
        }
        strategie->trier(data);
    }

    void afficher(const std::vector<std::string>& data) {
        for (const auto& s : data) std::cout << s << " ";
        std::cout << std::endl;
    }
};

#endif
