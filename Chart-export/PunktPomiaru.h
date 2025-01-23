#ifndef PUNKTPOMIARU_H
#define PUNKTPOMIARU_H

#include <string>

/**
 * @brief Klasa reprezentuj¹ca punkt pomiaru energii.
 *
 * Klasa ta przechowuje dane dotycz¹ce pomiarów energii, takie jak autokonsumpcja,
 * eksport, import, pobór i produkcja. Umo¿liwia to monitorowanie i analizowanie
 * zu¿ycia energii w danym punkcie pomiaru.
 */
class PunktPomiaru {
public:
    /**
     * @brief Data i godzina pomiaru.
     *
     * Przechowuje informacjê o dacie i godzinie, w której dokonano pomiaru.
     */
    std::string dataGodzina;

    /**
     * @brief Autokonsumpcja energii.
     *
     * Przechowuje wartoœæ autokonsumpcji energii w danym punkcie pomiaru.
     */
    double autokonsumpcja;

    /**
     * @brief Eksport energii.
     *
     * Przechowuje wartoœæ energii, która zosta³a wyeksportowana z danego punktu pomiaru.
     */
    double eksport;

    /**
     * @brief Import energii.
     *
     * Przechowuje wartoœæ energii, która zosta³a zaimportowana do danego punktu pomiaru.
     */
    double import_;

    /**
     * @brief Pobór energii.
     *
     * Przechowuje wartoœæ energii, która zosta³a pobrana z danego punktu pomiaru.
     */
    double pobor;

    /**
     * @brief Produkcja energii.
     *
     * Przechowuje wartoœæ energii, która zosta³a wyprodukowana w danym punkcie pomiaru.
     */
    double produkcja;
};

#endif // PUNKTPOMIARU_H
