#include "Drzewo.h"
#include "CSVReader.h"
#include <iostream>

/**
 * @brief G��wna funkcja programu.
 *
 * Program wczytuje dane z pliku CSV, tworzy drzewo danych i wy�wietla
 * pomiary zwi�zane z autokonsumpcj�, eksportem, importem, poborem i produkcj�.
 *
 * @return Kod zako�czenia programu (0 - sukces).
 */
int main() {
    CSVReader reader; ///< Obiekt do wczytywania danych z pliku CSV.
    std::vector<PunktPomiaru*> punkty = reader.wczytajDane("dane.csv");

    Drzewo drzewo; ///< Obiekt do przechowywania danych w strukturze drzewa.
    drzewo.wczytajDoDrzewa(punkty); ///< Wczytuje dane do drzewa.

    // Testowe wy�wietlanie danych
    for (const auto& [rok, miesiace] : drzewo.dane) {
        for (const auto& [miesiac, rokMiesiacDzien] : miesiace) {
            for (size_t dzien = 0; dzien < 31; ++dzien) {
                if (rokMiesiacDzien->dni[dzien] == nullptr) continue;

                for (int cwiartka = 0; cwiartka < 4; ++cwiartka) {
                    for (const PunktPomiaru* punkt : rokMiesiacDzien->dni[dzien]->cwiartki[cwiartka]) {
                        std::cout << "Data: " << punkt->dataGodzina
                            << ", Autokonsumpcja: " << punkt->autokonsumpcja
                            << ", Eksport: " << punkt->eksport
                            << ", Import: " << punkt->import_
                            << ", Pobor: " << punkt->pobor
                            << ", Produkcja: " << punkt->produkcja << std::endl;
                    }
                }
            }
        }
    }

    // Sprz�tanie dynamicznie alokowanej pami�ci
    for (PunktPomiaru* punkt : punkty) {
        delete punkt; ///< Zwalnia pami�� zajmowan� przez obiekty PunktPomiaru.
    }

    return 0; ///< Zwraca 0 jako kod zako�czenia programu.
}