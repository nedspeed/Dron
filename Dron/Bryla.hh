#ifndef BRYLA_HH
#define BRYLA_HH
#include "MacObr.hh"
#include "rysuj.hh"

class Bryla : public MacObr, Rysuj
{
protected:
MacObr orientacja; // mnozenie macierzy obrotu
Wektor<double, ROZMIAR> srodek; // przesuniecie, dodawanie wektora
int bryla;
std::shared_ptr<drawNS::Draw3DAPI> gnuplot;
//nowe_wierzcholki = srodek + orientacja * stare_wierzcholki
public:
Rysuj(drawNS::Draw3DAPI*plot): gnuplot(plot){}
Bryla(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &srodek, const MacObr &orientacja): Rysuj(plot), orientacja(orientacja), srodek(srodek), bryla(0){}
virtual void rysuj_ksztalt()=0;
};

#endif