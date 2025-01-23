#include "Drzewo.h"
#include "CSVReader.h"
#include <iostream>

int main() {
    CSVReader reader;
    std::vector<PunktPomiaru*> punkty = reader.wczytajDane("dane.csv");

    Drzewo drzewo;
    drzewo.wczytajDoDrzewa(punkty);

    // Testowe wyœwietlanie danych
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

    // Sprz¹tanie dynamicznie alokowanej pamiêci
    for (PunktPomiaru* punkt : punkty) {
        delete punkt;
    }

    return 0;
}