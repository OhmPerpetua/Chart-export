#ifndef DZIEN�WIARTKA_H
#define DZIEN�WIARTKA_H

#include <vector>
#include "PunktPomiaru.h"

/**
 * @class DzienCwiartka
 * @brief Klasa reprezentuj�ca zbi�r punkt�w pomiarowych podzielonych na cztery �wiartki.
 *
 * Klasa ta przechowuje punkty pomiarowe w czterech r�nych wektorach, kt�re reprezentuj�
 * r�ne �wiartki. Ka�da �wiartka jest reprezentowana przez tablic� wektor�w.
 */
class DzienCwiartka {
public:
    /**
     * @brief Tablica wektor�w punkt�w pomiarowych.
     *
     * Tablica zawiera cztery wektory, gdzie ka�dy z nich przechowuje wska�niki do obiekt�w
     * typu PunktPomiaru, reprezentuj�cych punkty pomiarowe w danej �wiartce.
     */
    std::vector<PunktPomiaru*> cwiartki[4];
};

#endif
