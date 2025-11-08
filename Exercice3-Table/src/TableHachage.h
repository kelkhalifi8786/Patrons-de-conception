#ifndef TABLEHACHAGE_H
#define TABLEHACHAGE_H

#include <iostream>
#include <list>
#include <vector>
#include <string>

class TableHachage {
private:
    int taille;
    std::vector<std::list<std::pair<int, std::string>>> table;

    int fonctionHachage(int cle) const {
        return cle % taille;
    }

public:
    TableHachage(int t) : taille(t), table(t) {}

    void inserer(int cle, const std::string& valeur) {
        int index = fonctionHachage(cle);
        table[index].push_back({cle, valeur});
    }

    std::string rechercher(int cle) {
        int index = fonctionHachage(cle);
        for(auto& p : table[index]) {
            if(p.first == cle) return p.second;
        }
        return ""; // non trouvé
    }

    void supprimer(int cle) {
        int index = fonctionHachage(cle);
        table[index].remove_if([cle](auto& p){ return p.first == cle; });
    }

    void afficher() {
        for(int i = 0; i < taille; i++) {
            std::cout << "Case " << i << ": ";
            for(auto& p : table[i]) {
                std::cout << "(" << p.first << "," << p.second << ") ";
            }
            std::cout << std::endl;
        }
    }
};

#endif
