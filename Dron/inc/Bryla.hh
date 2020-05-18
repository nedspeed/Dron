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
MacObr orientacja; // mnozenie macierzy obrotu
Wektor<double, ROZMIAR> srodek; // przesuniecie, dodawanie wektora
int br; //zmienna z id
//nowe_wierzcholki = srodek + orientacja * stare_wierzcholki
public:

Bryla(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &sr, const Macierz<double, 3> &mac): Rysuj(plot), orientacja(mac), srodek(sr), br(0){}
void rysuj_ksztalt() override;
void wymaz_ksztalt() override;
void obroc(char os, double kat);
};

#endif