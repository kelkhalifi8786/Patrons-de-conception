#include "Configuration.h" // <--- obligatoire
#include <iostream>

int main() {
    Configuration& config = Configuration::getInstance();
    config.afficherParametres();
    return 0;
}
