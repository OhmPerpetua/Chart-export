#ifndef DRZEWO_H
#define DRZEWO_H

#include <map>
#include <vector>
#include "RokMiesiacDzien.h"

/**
 * @class Drzewo
 * @brief Klasa reprezentuj�ca drzewo, kt�re przechowuje dane pomiarowe.
 *
 * Klasa Drzewo u�ywa zagnie�d�onej mapy do przechowywania danych pomiarowych
 * zorganizowanych wed�ug roku, miesi�ca i dnia.
 */
class Drzewo {
public:
    /**
     * @brief Mapa przechowuj�ca dane pomiarowe.
     *
     * Mapa, w kt�rej kluczem jest rok, a warto�ci� jest kolejna mapa,
     * kt�rej kluczem jest miesi�c, a warto�ci� wska�nik na obiekt
     * RokMiesiacDzien.
     */
    std::map<int, std::map<int, RokMiesiacDzien*>> dane;

    /**
     * @brief Wczytuje punkty pomiaru do drzewa.
     *
     * @param punkty Vector wska�nik�w do obiekt�w PunktPomiaru,
     *               kt�re maj� zosta� wczytane do drzewa.
     */
    void wczytajDoDrzewa(std::vector<PunktPomiaru*> punkty);
};

#endif
