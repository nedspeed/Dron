#ifndef WODA_HH
#define WODA_HH
#include "Powierzchnia.hh"
#include "Przeszkoda.hh"
using std::vector;
using std::shared_ptr;
using drawNS::Draw3DAPI;

class Woda : public Powierzchnia, public Przeszkoda
{
 
 public:
 Woda(shared_ptr<Draw3DAPI>plot, vector<Wektor<double,3>>wierzcholki); //konstruktor
 void rysuj_ksztalt() override;
 void wymaz_ksztalt() override;
    ~Woda() = default;
};

#endif