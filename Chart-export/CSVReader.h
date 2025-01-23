#ifndef CSVREADER_H
#define CSVREADER_H

#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "PunktPomiaru.h"

/**
 * @class CSVReader
 * @brief Klasa do odczytu danych z plików CSV.
 *
 * Klasa ta umo¿liwia wczytywanie danych pomiarowych z pliku
 * CSV i przechowywanie ich w wektorze obiektów typu PunktPomiaru.
 */
class CSVReader {
public:
    /**
     * @brief Wczytuje dane z pliku CSV.
     *
     * Funkcja ta otwiera plik o podanej nazwie, odczytuje jego zawartoœæ
     * i tworzy obiekty typu PunktPomiaru, które nastêpnie umieszcza
     * w wektorze.
     *
     * @param nazwaPliku Nazwa pliku CSV, z którego maj¹ byæ wczytane dane.
     * @return std::vector<PunktPomiaru*> Wektor wskaŸników do obiektów PunktPomiaru.
     */
    std::vector<PunktPomiaru*> wczytajDane(std::string nazwaPliku);
};

#endif // CSVREADER_H
