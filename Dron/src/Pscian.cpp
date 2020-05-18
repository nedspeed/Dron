#include "Pscian.hh"
using namespace std;
 Pscian::Pscian(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &sr, const Macierz<double,3> &macierz, Wektor<double,3>*wierzcholki): Bryla(plot, sr, macierz)
  {
    for(int i=0; i<8; i++)
    {
      w[i]=wierzcholki[i];
    }
  }
  void Pscian::wymaz_ksztalt()
  {
    gnuplot->erase_shape(br);
  }

  void Pscian::rysuj_ksztalt()
  {
    br=gnuplot->draw_polyhedron (vector<vector<drawNS::Point3D>>
    {
      {w[0],w[1],w[2],w[3]},
      {w[4],w[5],w[6],w[7]}
    },"black");
    gnuplot->redraw();
  }


void Pscian::przesun(const Wektor<double,3> &posuw)
{
  double dzielnik=500;
  Wektor<double,3> n;
  n = posuw/dzielnik;
  for(int j = 1; j <= dzielnik; j++)
  {
    srodek = srodek + n;
    for(int i = 0; i < 8; i++)
    {
      w[i] = w[i] + n;
    }
    //if(nazwa!=0)
    usleep(0.0000001);
    gnuplot->erase_shape(br);
    this->rysuj_ksztalt();
  }
  for( int i = 0; i < 8; i++){
    w[i] = w[i] + posuw;
  }
  gnuplot -> erase_shape(br);
  this->rysuj_ksztalt();
}

void Pscian::obroc(char os, double kat){
  orientacja = MacObr(os, kat);
  for( int i = 0; i < 8; i++){
    w[i] = srodek + orientacja * w[i];
  } 
  gnuplot->erase_shape(br);
  this -> rysuj_ksztalt();

}