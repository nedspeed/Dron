#ifndef PSCIAN_HH
#define PSCIAN_HH
#include "Bryla.hh"

class Pscian : public Bryla
{
    protected:
 MacObr orientacja override; // mnozenie macierzy obrotu
 Wektor<double, ROZMIAR> srodek override; // przesuniecie, dodawanie wektora
 list<Wektor> wierzcholki; 
}

#endif
