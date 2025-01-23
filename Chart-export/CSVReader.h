#ifndef CSVREADER_H
#define CSVREADER_H

#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "PunktPomiaru.h"

class CSVReader {
public:
    std::vector<PunktPomiaru*> wczytajDane(std::string nazwaPliku);
};

#endif#