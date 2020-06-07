#ifndef DNO_HH
#define DNO_HH
#include "Powierzchnia.hh"
#include "Przeszkoda.hh"
using std::vector;
using std::shared_ptr;
using drawNS::Draw3DAPI;

class Dno : public Powierzchnia, public Przeszkoda
{
 
 public:
 Dno(shared_ptr<Draw3DAPI>plot, vector<Wektor<double,3>>wierzcholki); //konstruktor
 void rysuj_ksztalt() override;
 void wymaz_ksztalt() override;
    ~Dno() = default;
};

#endif