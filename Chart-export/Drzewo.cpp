#include "Drzewo.h"
#include "CSVReader.h"
#include <iomanip>

/**
 * @brief Wczytuje punkty pomiarowe do struktury drzewa.
 *
 * Funkcja przetwarza wektor wska�nik�w do obiekt�w typu PunktPomiaru,
 * analizuj�c dat� i godzin� ka�dego punktu. Na podstawie godziny
 * przypisuje punkty do odpowiednich �wiartek dnia oraz struktury
 * reprezentuj�ce lata, miesi�ce i dni.
 *
 * @param punkty Wektor wska�nik�w do obiekt�w typu PunktPomiaru,
 *               kt�re maj� zosta� wczytane do drzewa.
 *
 * @note Oczekuje, �e format daty w polu `dataGodzina` obiekt�w
 *       PunktPomiaru jest zgodny z YYYY-MM-DD HH formatem.
 *
 * @warning Nale�y upewni� si�, �e struktury dla roku, miesi�ca i dnia
 *          s� poprawnie zainicjowane przed wywo�aniem tej funkcji.
 */
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
        }
        else if (godzina < 12) {
            cwiartka = 1;
        }
        else if (godzina < 18) {
            cwiartka = 2;
        }
        else {
            cwiartka = 3;
        }

        // Zapewnienie, �e struktury dla roku, miesi�ca i dnia istniej�
        if (dane[rok].find(miesiac) == dane[rok].end()) {
            dane[rok][miesiac] = new RokMiesiacDzien();
        }
        if (dane[rok][miesiac]->dni[dzien - 1] == nullptr) {
            dane[rok][miesiac]->dni[dzien - 1] = new DzienCwiartka();
        }

        // Dodanie punktu pomiarowego do odpowiedniej �wiartki
        dane[rok][miesiac]->dni[dzien - 1]->cwiartki[cwiartka].push_back(punkt);
    }
}
