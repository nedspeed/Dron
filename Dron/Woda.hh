#ifndef WODA_HH
#define WODA_HH
#include "rysuj.hh"
#include "MacObr.hh"
using std::vector;
using std::shared_ptr;
using drawNS::Draw3DAPI;

class Woda : public Rysuj
{
    protected:
 vector<Wektor<double, ROZMIAR>> w = vector<Wektor<double, ROZMIAR>> (8); //wierzcholki
 int id;
 public:
 Woda(shared_ptr<Draw3DAPI>plot, vector<Wektor<double,3>>wierzcholki); //konstruktor
 void rysuj_ksztalt() override;
 void wymaz_ksztalt() override;
    ~Woda() = default;
};

#endif