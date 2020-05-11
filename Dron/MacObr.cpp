#include "MacObr.hh"

    MacObr::MacObr(const Macierz<double, ROZMIAR> &M) : Macierz<double, ROZMIAR> (M){
    for(int i; i < ROZMIAR; i++){
        if(abs(M.Wyznacznik()) != 1){
            cerr << "Podana macierz nie jest macierza obrotu." << endl;
            exit(1);
        }
        if(abs(M[i] * M.wez_wektor(i) < 0.0000001)){
            cerr << "Podana macierz nie jest macierza obrotu." << endl;
            exit(1);
        }
        for(int i = 0; i < ROZMIAR; i++){
            kol[i] = M[i];
        }
    }
    }
