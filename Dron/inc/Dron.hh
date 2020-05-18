#ifndef DRON_HH
#define DRON_HH
#include "Pscian.hh"

class Dron : public Pscian
{

public:
Dron(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &sr, const Macierz<double,3> &macierz, Wektor<double,3>*w): Pscian(plot, sr, macierz, w){}
};

#endif