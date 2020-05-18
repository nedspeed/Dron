#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include "Dron.hh"

using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;

void wait4key() {
  do {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while(std::cin.get() != '\n');
}

int main() {

  drawNS::APIGnuPlot3D * api = new APIGnuPlot3D(-5,5,-5,5,-5,5,-1);
  Wektor<double, ROZMIAR> a,b[8];
  Macierz<double, ROZMIAR> c;
  cin>>a;
  for(int i = 0; i < 8; i++){
    cin>>b[i];
  }
  cin>>c;




  
  delete api;//dla zwykłych wskaźników musimy posprzątać
}
