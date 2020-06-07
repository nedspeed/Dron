#ifndef DRON_HH
#define DRON_HH
#include "Pscian.hh"
#include "Przeszkoda.hh"

class Dron : public Pscian, public Przeszkoda
{

public:
Dron(shared_ptr<Draw3DAPI>plot, const Wektor<double,3> &sr, vector<Wektor<double,3>>w): Pscian(plot, sr, w){}
};

#endif