#pragma once
#include <iostream>
#include <string>

class Configuration {
private:
    std::string cheminFichier;
    std::string utilisateur;
    std::string motDePasse;

    Configuration() : cheminFichier("config.txt"), utilisateur("admin"), motDePasse("1234") {}
    Configuration(const Configuration&) = delete;
    Configuration& operator=(const Configuration&) = delete;

public:
    static Configuration& getInstance() {
        static Configuration instance;
        return instance;
    }

    void afficherParametres() {
        std::cout << "Chemin: " << cheminFichier
                  << ", Utilisateur: " << utilisateur
                  << ", Mot de passe: " << motDePasse << std::endl;
    }
};
