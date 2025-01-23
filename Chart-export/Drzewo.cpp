#include "Drzewo.h"
#include "CSVReader.h"
#include <iomanip>

void Drzewo::wczytajDoDrzewa(std::vector<PunktPomiaru*> punkty) {
    for (PunktPomiaru* punkt : punkty) {
        std::string data = punkt->dataGodzina;
        int rok = std::stoi(data.substr(0, 4));
        int miesiac = std::stoi(data.substr(5, 2));
        int dzien = std::stoi(data.substr(8, 2));
        int godzina = std::stoi(data.substr(11, 2));
        
        int cwiartka;
        if (godzina < 6) {
            cwiartka = 0;
        } else if (godzina < 12) {
            cwiartka = 1;
        } else if (godzina < 18) {
            cwiartka = 2;
        } else {
            cwiartka = 3;
        }

        // Zapewnienie, ¿e struktury dla roku, miesi¹ca i dnia istniej¹
        if (dane[rok].find(miesiac) == dane[rok].end()) {
            dane[rok][miesiac] = new RokMiesiacDzien();
        }
        if (dane[rok][miesiac]->dni[dzien - 1] == nullptr) {
            dane[rok][miesiac]->dni[dzien - 1] = new DzienCwiartka();
        }

        // Dodanie punktu pomiarowego do odpowiedniej æwiartki
        dane[rok][miesiac]->dni[dzien - 1]->cwiartki[cwiartka].push_back(punkt);
    }
}