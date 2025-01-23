#ifndef DZIENÆWIARTKA_H
#define DZIENÆWIARTKA_H

#include <vector>
#include "PunktPomiaru.h"

/**
 * @class DzienCwiartka
 * @brief Klasa reprezentuj¹ca zbiór punktów pomiarowych podzielonych na cztery æwiartki.
 *
 * Klasa ta przechowuje punkty pomiarowe w czterech ró¿nych wektorach, które reprezentuj¹
 * ró¿ne æwiartki. Ka¿da æwiartka jest reprezentowana przez tablicê wektorów.
 */
class DzienCwiartka {
public:
    /**
     * @brief Tablica wektorów punktów pomiarowych.
     *
     * Tablica zawiera cztery wektory, gdzie ka¿dy z nich przechowuje wskaŸniki do obiektów
     * typu PunktPomiaru, reprezentuj¹cych punkty pomiarowe w danej æwiartce.
     */
    std::vector<PunktPomiaru*> cwiartki[4];
};

#endif
