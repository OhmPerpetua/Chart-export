#ifndef ROKMIESIACDZIEN_H
#define ROKMIESIACDZIEN_H

#include "DzienCwiartka.h"
#include <vector>

/**
 * @brief Klasa reprezentuj�ca rok, miesi�c i dni.
 *
 * Ta klasa przechowuje tablic� wektor�w, gdzie ka�dy wektor zawiera wska�niki
 * do obiekt�w klasy DzienCwiartka, reprezentuj�cych dni w miesi�cu.
 */
class RokMiesiacDzien {
public:
    /// Tablica wektor�w przechowuj�ca wska�niki do DzienCwiartka dla ka�dego dnia miesi�ca.
    std::vector<DzienCwiartka*> dni[31];

};

#endif