#ifndef DRON_HH
#define DRON_HH
#include "Pscian.hh"

class Dron : public Pscian
{
protected:
virtual MacObr orientacja; // mnozenie macierzy obrotu
virtual Wektor<double, ROZMIAR> srodek; // przesuniecie, dodawanie wektora
Wektor<double, ROZMIAR> wierzcholki[8]; 
public:
Dron(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &srodek, const Macierz<double,3> &orientacja, Wektor<double,3>*w): Pscian(plot, srodek,orientacja,wierzcholki);
}

#endif