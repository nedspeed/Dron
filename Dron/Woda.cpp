#include "Woda.hh"

using std::shared_ptr;
using std::vector;


Woda::Woda(shared_ptr<Draw3DAPI>plot, vector<Wektor<double,3>>wierzcholki){
    
    for(int i=0; i<8; i++)
    {
      w[i] = wierzcholki[i];
    }
    gnuplot = plot;
    id = 0;
  }

   void Woda::wymaz_ksztalt()
  {
    gnuplot->erase_shape(id);
  }

  void Woda::rysuj_ksztalt()
  {
    id=gnuplot->draw_surface (vector<vector<Point3D>>
    {
      {w[0].Wektor2Point(),w[1].Wektor2Point(),w[2].Wektor2Point()},
      {w[3].Wektor2Point(),w[4].Wektor2Point(),w[5].Wektor2Point()}
      //{w[6].Wektor2Point(),w[7].Wektor2Point(),w[8].Wektor2Point()},
      //{w[9].Wektor2Point(),w[10].Wektor2Point(),w[11].Wektor2Point()},
      //{w[12].Wektor2Point(),w[13].Wektor2Point(),w[14].Wektor2Point()}
    },"blue");
    gnuplot->redraw();
  }