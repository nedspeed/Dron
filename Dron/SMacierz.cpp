#include "Macierz.cpp"
template  class Macierz<double, ROZMIAR>;
template istream& operator >> (istream &Strm, Macierz<double, ROZMIAR> &Mac); 
template ostream& operator << (ostream &Strm, const Macierz<double, ROZMIAR> &Mac);
