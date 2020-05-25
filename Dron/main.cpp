#include <iostream>
#include <fstream>
#include "Dr3D_gnuplot_api.hh"
#include "Pscian.hh"
#include "Woda.hh"

using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;
using std::fstream;
using std::cin;
using std::ios_base;

void wait4key() {
  do {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while(std::cin.get() != '\n');
}



int main() {

    Wektor<double, ROZMIAR> a; //srodek
    vector<Wektor<double, ROZMIAR>> b; //wierzcholki
    char opcja;
    Wektor<double, ROZMIAR> dystans;
    double kat;
    char os;
  std::fstream dane("dane.txt", std::ios_base::in);

        dane >> a;
        for( int i=0; i < 8; i++){

          Wektor<double, ROZMIAR> tmp;
          dane >> tmp;
          b.push_back(tmp);
          cout << tmp;
        }

      vector<Wektor<double, ROZMIAR>> fala;
        std::fstream dane1("fale.txt", std::ios_base::in);

        for( int i=0; i < 6; i++){

          Wektor<double, ROZMIAR> tmp;
          dane1 >> tmp;
          fala.push_back(tmp);
        }


  cout << a << endl;
  
  std::shared_ptr<drawNS::Draw3DAPI> api (new APIGnuPlot3D(-10,10,-10,10,-10,10,-1));
  api->change_ref_time_ms(0);
  Pscian p(api, a, b);
  Woda v(api, fala);
  v.rysuj_ksztalt();
  p.rysuj_ksztalt();
  bool exit = 0;
  while(!exit)
{
  cin>>opcja;
  switch (opcja){
  {
  case 'r': //poruszanie sie
   cin >> dystans;
    p.przesun(dystans);
   }
    break;

    case 'o'://obrot
   cin>>os;
   cin>>kat;
   p.obroc(os, kat);
    break;

    case 'e':
    exit = 1;
    break;
  }
}
p.wymaz_ksztalt();


  return 0;

}
