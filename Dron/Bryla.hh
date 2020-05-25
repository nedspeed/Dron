#ifndef BRYLA_HH
#define BRYLA_HH
#include "MacObr.hh"
#include "rysuj.hh"

using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::vector;

class Bryla : public Rysuj
{
protected:

Wektor<double, ROZMIAR> srodek; // przesuniecie, dodawanie wektora
int br; //zmienna z id
//nowe_wierzcholki = srodek + orientacja * stare_wierzcholki
public:

Bryla() {}
Bryla(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &sr): Rysuj(plot), srodek(sr), br(0) {}

void obroc(char os, double kat);
~Bryla() = default;
};

#endif