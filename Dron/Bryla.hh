#ifndef BRYLA_HH
#define BRYLA_HH
#include "MacObr.hh"

class Bryla : public MacObr
{
protected:
virtual MacObr orientacja; // mnozenie macierzy obrotu
virtual Wektor<double, ROZMIAR> srodek; // przesuniecie, dodawanie wektora
//nowe_wierzcholki = srodek + orientacja * stare_wierzcholki
};

#endif
