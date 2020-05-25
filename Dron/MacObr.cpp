#include "MacObr.hh"

    MacObr::MacObr(){
        for( int i = 0; i < ROZMIAR; i++){

            kol[i] = Wektor<double,3>();
        }
    }

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

    MacObr::MacObr(char os, double kat){
        switch(os)
        {
            case 'x' :
            {
                Wektor<double, ROZMIAR> W1(1.0, 0.0, 0.0);
                Wektor<double, ROZMIAR> W2(0.0, cos((kat/180)*M_PI), -sin((kat/180)*M_PI));
                Wektor<double, ROZMIAR> W3(0.0, sin((kat/180)*M_PI), cos((kat/180)*M_PI));
                Macierz<double, ROZMIAR> M(W1, W2, W3);
                MacObr MO(M);
                *this = MO;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
                break;
            }

            case 'y' :
            {
                Wektor<double, ROZMIAR> W1(cos((kat/180)*M_PI), 0.0, sin((kat/180)*M_PI));
                Wektor<double, ROZMIAR> W2(0.0, 1.0, 0.0);
                Wektor<double, ROZMIAR> W3(-sin((kat/180)*M_PI), 0.0, cos((kat/180)*M_PI));
                Macierz<double, ROZMIAR> M(W1, W2, W3);
                MacObr MO(M);
                *this = MO;
                break;
            }

            case 'z' :
            {
                Wektor<double, ROZMIAR> W1(cos((kat/180)*M_PI), -sin((kat/180)*M_PI), 0.0);
                Wektor<double, ROZMIAR> W2(sin((kat/180)*M_PI), cos((kat/180)*M_PI), 0.0);
                Wektor<double, ROZMIAR> W3(0.0, 0.0, 1.0);
                Macierz<double, ROZMIAR> M(W1, W2, W3);
                MacObr MO(M);
                *this = MO;
                break;
            }

        }
    }
    