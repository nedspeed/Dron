#include "Pscian.hh"
#include <unistd.h>
using std::vector;
using namespace std;
using std::shared_ptr;
using drawNS::Draw3DAPI;
using drawNS::Point3D;

 Pscian::Pscian(shared_ptr<Draw3DAPI> plot, const Wektor<double,3> &sr, vector<Wektor<double,3>> wierzcholki)
  {
    for(int i=0; i<8; i++)
    {
      w[i] = wierzcholki[i];
    }
    srodek = sr;
    gnuplot = plot;
  }

  void Pscian::wymaz_ksztalt()
  {
    gnuplot->erase_shape(br);
  }

  void Pscian::rysuj_ksztalt()
  {
    br=gnuplot->draw_polyhedron (vector<vector<Point3D>>
    {
      {w[0].Wektor2Point(),w[1].Wektor2Point(),w[2].Wektor2Point(),w[3].Wektor2Point()},
      {w[4].Wektor2Point(),w[5].Wektor2Point(),w[6].Wektor2Point(),w[7].Wektor2Point()}
    },"black");
    gnuplot->redraw();
  }


void Pscian::przesun(const Wektor<double,3> &posuw)
{
  
  Wektor<double,3> n;
  Wektor<double,3> tmp = posuw;
  int dzielnik = 450;
  n = tmp/dzielnik;
  
  for( int j = 0; j < dzielnik; j ++){

  for( int i = 0; i < 8; i++){
    w[i] = w[i] + n;
  }
  gnuplot -> erase_shape(br);
  this->rysuj_ksztalt();
  gnuplot -> redraw();
}
}

void Pscian::obroc(char os, double kat){
  cout << "bbbb";
  Macierz<double,3> m;
   MacObr orientacja;
   orientacja = orientacja.orient(os,kat);
  
  for( int i = 0; i < 8; i++){
  w[i] = w[i] - srodek;
  w[i] = orientacja * w[i];
  w[i] = w[i] + srodek;
  } 
  gnuplot->erase_shape(br);
  this -> rysuj_ksztalt();
  gnuplot -> redraw();
}