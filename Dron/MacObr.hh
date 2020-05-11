#ifndef MACOBR_HH
#define MACOBR_HH

#include "Macierz.hh"

class MacObr : public Macierz<double, ROZMIAR>
{

    public:
MacObr(const Macierz<double, ROZMIAR> &M);
};

#endif