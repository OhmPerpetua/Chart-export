#ifndef DRZEWO_H
#define DRZEWO_H

#include <map>
#include "RokMiesiacDzien.h"

class Drzewo {
public:
    std::map<int, std::map<int, RokMiesiacDzien*>> dane;
    void wczytajDoDrzewa(std::vector<PunktPomiaru*> punkty);
};

#endif