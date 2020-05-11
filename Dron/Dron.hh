#ifndef DRON_HH
#define DRON_HH
#include "Pscian.hh"

class Dron : public Pscian
{
protected:
virtual MacObr orientacja; // mnozenie macierzy obrotu
virtual Wektor<double, ROZMIAR> srodek; // przesuniecie, dodawanie wektora
virtual list<Wektor> wierzcholki; 
}

#endif