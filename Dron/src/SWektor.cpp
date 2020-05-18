#include "Wektor.cpp"
template  class Wektor<double, ROZMIAR>;
template istream& operator >> (istream &Strm, Wektor<double, ROZMIAR> &W); 
template ostream& operator << (ostream &Strm, const Wektor<double, ROZMIAR> &W);
