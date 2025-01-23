#ifndef PUNKTPOMIARU_H
#define PUNKTPOMIARU_H

#include <string>

/**
 * @brief Klasa reprezentuj�ca punkt pomiaru energii.
 *
 * Klasa ta przechowuje dane dotycz�ce pomiar�w energii, takie jak autokonsumpcja,
 * eksport, import, pob�r i produkcja. Umo�liwia to monitorowanie i analizowanie
 * zu�ycia energii w danym punkcie pomiaru.
 */
class PunktPomiaru {
public:
    /**
     * @brief Data i godzina pomiaru.
     *
     * Przechowuje informacj� o dacie i godzinie, w kt�rej dokonano pomiaru.
     */
    std::string dataGodzina;

    /**
     * @brief Autokonsumpcja energii.
     *
     * Przechowuje warto�� autokonsumpcji energii w danym punkcie pomiaru.
     */
    double autokonsumpcja;

    /**
     * @brief Eksport energii.
     *
     * Przechowuje warto�� energii, kt�ra zosta�a wyeksportowana z danego punktu pomiaru.
     */
    double eksport;

    /**
     * @brief Import energii.
     *
     * Przechowuje warto�� energii, kt�ra zosta�a zaimportowana do danego punktu pomiaru.
     */
    double import_;

    /**
     * @brief Pob�r energii.
     *
     * Przechowuje warto�� energii, kt�ra zosta�a pobrana z danego punktu pomiaru.
     */
    double pobor;

    /**
     * @brief Produkcja energii.
     *
     * Przechowuje warto�� energii, kt�ra zosta�a wyprodukowana w danym punkcie pomiaru.
     */
    double produkcja;
};

#endif // PUNKTPOMIARU_H
