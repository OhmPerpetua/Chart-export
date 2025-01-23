#ifndef CSVREADER_H
#define CSVREADER_H

#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "PunktPomiaru.h"

/**
 * @class CSVReader
 * @brief Klasa do odczytu danych z plik�w CSV.
 *
 * Klasa ta umo�liwia wczytywanie danych pomiarowych z pliku
 * CSV i przechowywanie ich w wektorze obiekt�w typu PunktPomiaru.
 */
class CSVReader {
public:
    /**
     * @brief Wczytuje dane z pliku CSV.
     *
     * Funkcja ta otwiera plik o podanej nazwie, odczytuje jego zawarto��
     * i tworzy obiekty typu PunktPomiaru, kt�re nast�pnie umieszcza
     * w wektorze.
     *
     * @param nazwaPliku Nazwa pliku CSV, z kt�rego maj� by� wczytane dane.
     * @return std::vector<PunktPomiaru*> Wektor wska�nik�w do obiekt�w PunktPomiaru.
     */
    std::vector<PunktPomiaru*> wczytajDane(std::string nazwaPliku);
};

#endif // CSVREADER_H
