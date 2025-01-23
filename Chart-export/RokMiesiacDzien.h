#ifndef ROKMIESIACDZIEN_H
#define ROKMIESIACDZIEN_H

#include "DzienCwiartka.h"
#include <vector>

/**
 * @brief Klasa reprezentuj¹ca rok, miesi¹c i dni.
 *
 * Ta klasa przechowuje tablicê wektorów, gdzie ka¿dy wektor zawiera wskaŸniki
 * do obiektów klasy DzienCwiartka, reprezentuj¹cych dni w miesi¹cu.
 */
class RokMiesiacDzien {
public:
    /// Tablica wektorów przechowuj¹ca wskaŸniki do DzienCwiartka dla ka¿dego dnia miesi¹ca.
    std::vector<DzienCwiartka*> dni[31];

};

#endif