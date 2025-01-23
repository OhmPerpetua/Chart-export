#include "CSVReader.h"

std::vector<PunktPomiaru*> CSVReader::wczytajDane(std::string nazwaPliku) {
    std::ifstream plik(nazwaPliku);
    std::vector<PunktPomiaru*> dane;
    std::string linia;
    bool pierwszaLinia = true;

    while (std::getline(plik, linia)) {
        if (pierwszaLinia) {
            pierwszaLinia = false;
            continue;
        }

        std::stringstream ss(linia);
        std::string element;
        PunktPomiaru* punkt = new PunktPomiaru();

        std::getline(ss, element, ',');
        punkt->dataGodzina = element; // Data i godzina pomiaru

        std::getline(ss, element, ',');
        punkt->autokonsumpcja = std::stod(element); // Autokonsumpcja

        std::getline(ss, element, ',');
        punkt->eksport = std::stod(element); // Eksport

        std::getline(ss, element, ',');
        punkt->import_ = std::stod(element); // Import

        std::getline(ss, element, ',');
        punkt->pobor = std::stod(element); // Pobór

        std::getline(ss, element, ',');
        punkt->produkcja = std::stod(element); // Produkcja

        dane.push_back(punkt);
    }

    return dane;
}