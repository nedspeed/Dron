#ifndef MACOBR_HH
#define MACOBR_HH

#include "Macierz.hh"

class MacObr : public Macierz<double, ROZMIAR>
{
    public:
explicit MacObr(const Macierz<double, ROZMIAR> &M);
MacObr();
MacObr(char os, double kat);
};

#endif