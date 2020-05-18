#ifndef PSCIAN_HH
#define PSCIAN_HH
#include "Bryla.hh"

class Pscian : public Bryla
{
    protected:
 Wektor<double, ROZMIAR> w[8]; //wierzcholki
 public:
 Pscian(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &sr, const Macierz<double,3> &macierz, Wektor<double,3>*wierzcholki); //konstruktor
 void rysuj_ksztalt() override;
 void wymaz_ksztalt() override;
 void obroc(char os, double kat);
 void przesun(const Wektor<double,3> &posuw);
};

#endif