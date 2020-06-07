#ifndef GSLUP_HH
#define GSLUP_HH
#include "Bryla.hh"
using std::vector;
using std::shared_ptr;
using drawNS::Draw3DAPI;

class Gslup : public Bryla
{
    protected:
 vector<Wektor<double, ROZMIAR>> w = vector<Wektor<double, ROZMIAR>> (8); //wierzcholki
 public:
 Gslup(shared_ptr<Draw3DAPI>plot, const Wektor<double,3> &sr, vector<Wektor<double,3>>wierzcholki); //konstruktor
 void rysuj_ksztalt() override;
 void wymaz_ksztalt() override;
 void obroc(char os, double kat);
 void przesun(const Wektor<double,3> &posuw);
    ~Gslup() = default;
};

#endif