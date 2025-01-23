#ifndef DRZEWO_H
#define DRZEWO_H

#include <map>
#include <vector>
#include "RokMiesiacDzien.h"

/**
 * @class Drzewo
 * @brief Klasa reprezentuj¹ca drzewo, które przechowuje dane pomiarowe.
 *
 * Klasa Drzewo u¿ywa zagnie¿d¿onej mapy do przechowywania danych pomiarowych
 * zorganizowanych wed³ug roku, miesi¹ca i dnia.
 */
class Drzewo {
public:
    /**
     * @brief Mapa przechowuj¹ca dane pomiarowe.
     *
     * Mapa, w której kluczem jest rok, a wartoœci¹ jest kolejna mapa,
     * której kluczem jest miesi¹c, a wartoœci¹ wskaŸnik na obiekt
     * RokMiesiacDzien.
     */
    std::map<int, std::map<int, RokMiesiacDzien*>> dane;

    /**
     * @brief Wczytuje punkty pomiaru do drzewa.
     *
     * @param punkty Vector wskaŸników do obiektów PunktPomiaru,
     *               które maj¹ zostaæ wczytane do drzewa.
     */
    void wczytajDoDrzewa(std::vector<PunktPomiaru*> punkty);
};

#endif
