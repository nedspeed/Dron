#ifndef PSCIAN_HH
#define PSCIAN_HH
#include "Bryla.hh"

class Pscian : public Bryla
{
    protected:
 MacObr orientacja override; // mnozenie macierzy obrotu
 Wektor<double, ROZMIAR> srodek override; // przesuniecie, dodawanie wektora
<<<<<<< HEAD
 Wektor<double, ROZMIAR> wierzcholki[8]; 
 public:
 Prostopadloscian(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &srodek, const Macierz<double,3> &orientacja, Wektor<double,3>*wierzcholki);
 void rysuj_ksztalt() override;
 void Pscian::zmien_polozenie(const Wektor<double,3> &wierzcholki);
 void Pscian::zmien_wierzcholki(const Wektor<double,3> *wierzcholki);
=======
 list<Wektor> wierzcholki; 
>>>>>>> 9081d0f73d69f36d9927f19876dbc142c20f4eb9
}

#endif
