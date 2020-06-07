#ifndef WEKTOR_HH
#define WEKTOR_HH
#include "rozmiar.h"
#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include <cmath>
using drawNS::Point3D;
using namespace std;
/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */
template <typename T, int Wymiar> 
class Wektor{
  /*
   *  Tutaj trzeba wstawic definicje odpowiednich pol i metod prywatnych
   */
  protected:
T dane[Wymiar];
  public:
  Wektor<T, Wymiar>() {
    for(int i; i < ROZMIAR; i++)
    dane[i] = 0;
  }
  Wektor<T, Wymiar>(T dane[Wymiar]); //konstruktor od kolekcji
  Wektor<T, Wymiar>(T x, T y, T z){dane[0] = x; dane[1] = y; dane[2] = z;} //konstruktor dla macObr
  T operator *(const Wektor<T, Wymiar> &W2) const;  //przeciazenie mnozenia wektor razy wektor
  Wektor<T, Wymiar> operator /(const T &n) const; //przeciazenie dzielenia wektora przez liczbe
  Wektor<T, Wymiar> operator + (const Wektor<T, Wymiar> &W2) const; //przeciazenie dodawania wektorow
  Wektor<T, Wymiar> operator + (const T &n) const;
  Wektor<T, Wymiar> operator - (const Wektor<T, Wymiar> &W2) const; //przeciazenie odejmowania wektorow
  const T & operator [] (int indeks) const; //przeciazenie operatora indeksowania dla wektora typu const
  T & operator [] (int indeks); //przeciazenie operatora indeksowania dla wektora dowolnego typu
  Point3D Wektor2Point();
  
};

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 * Przeciazenie operatora przesuniecia bitowego w prawo,
 * za pierwszy argument bierze dana komende(np. cin) ze
 * strumienia wejsciowego z biblioteki std, 
 * a za drugi argument bierze podana macierz.
 */
template <typename T, int Wymiar> 
istream& operator >> (istream &Strm, Wektor<T, Wymiar> &W);

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 * Przeciazenie operatora przesuniecia bitowego w lewo,
 * za pierwszy argument bierze dana komende(np. cout) ze
 * strumienia wyjsciowego biblioteki std,
 * a za drugi argument bierze podana macierz.
 */
template <typename T, int Wymiar> 
ostream& operator << (ostream &Strm, const Wektor<T, Wymiar> &W);

#endif
