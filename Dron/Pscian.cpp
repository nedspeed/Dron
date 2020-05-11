#include "Pscian.hh"

 Pscian::Pscian(drawNS::APIGnuPlot3D*plot, const Wektor<double,3> &srodek, const Macierz<double,3> &orientacja, Wektor<double,3>*wierzcholki): Bryla(plot, srodek, orientacja)
  {
    for(int i=0; i<8; i++)
    {
      t[i]=w[i];
    }
  }


  void Pscian::rysuj_ksztalt()
  {
    bryla=gnuplot->draw_polyhedron (vector<vector<drawNS::Point3D>>
    {
      {t[0],t[1],t[2],t[3]},
      {t[4],t[5],t[6],t[7]}
    },"black");
    gnuplot->redraw();
  }


void Pscian::zmien_polozenie(const Wektor<double,3> &wierzcholki)
{
  double dzielnik=1000;
  Wektor<double,3> n;
  n = wierzcholki/dzielnik;
  for(int j = 1; j <= dzielnik; j++)
  {
    srodek = srodek + n;
    for(int i=0; i<8; i++)
    {
      wierzcholki[i] = wierzcholki[i] + n;
    }
    //if(nazwa!=0)
    usleep(0.0000001);
    gnuplot->erase_shape(nazwa);
    this->rysuj_ksztalt();
  }

  void Pscian::zmien_wierzcholki(const Wektor<double,3> *wierzcholki)
{
  gnuplot->erase_shape(bryla);
  for(int i=0; i<8; i++)
  {
    t[i]=wekt[i];
  }
  this->rysuj_ksztalt();

}