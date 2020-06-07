#ifndef MACOBR_HH
#define MACOBR_HH

#include "Macierz.hh"

class MacObr : public Macierz<double, ROZMIAR>
{
    public:
explicit MacObr(const Macierz<double, ROZMIAR> &M);
MacObr();
MacObr orient(const char &os, const double &kat);
};

#endif