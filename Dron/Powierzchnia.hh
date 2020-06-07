#ifndef POWIERZCHNIA_HH
#define POWIERZCHNIA_HH
#include "rysuj.hh"
#include "MacObr.hh"
using std::vector;
using std::shared_ptr;
using drawNS::Draw3DAPI;

class Powierzchnia : public Rysuj
{
    protected:
 vector<Wektor<double, ROZMIAR>> w = vector<Wektor<double, ROZMIAR>> (8); //wierzcholki
 int id;
 public:
 
 virtual void rysuj_ksztalt();
 virtual void wymaz_ksztalt();
    ~Powierzchnia() = default;
};

#endif