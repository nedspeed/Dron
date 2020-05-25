CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17 

__start__: main.out
	./main.out

main.out: Dr3D_gnuplot_api.o main.o SWektor.o SMacierz.o MacObr.o Pscian.o Woda.o
	g++ -o main.out Woda.o MacObr.o Pscian.o SWektor.o SMacierz.o main.o Dr3D_gnuplot_api.o -lpthread

main.o: main.cpp Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o main.o main.cpp

SWektor.o: Wektor.hh rozmiar.h SWektor.cpp Wektor.cpp
	g++ ${CPPFLAGS} -o SWektor.o SWektor.cpp

SMacierz.o: Macierz.hh Macierz.cpp SMacierz.cpp
	g++ ${CPPFLAGS} -o SMacierz.o SMacierz.cpp

MacObr.o: MacObr.hh  MacObr.cpp 
	g++ ${CPPFLAGS} -o MacObr.o MacObr.cpp


Pscian.o: Pscian.hh Pscian.cpp
	g++ ${CPPFLAGS} -o Pscian.o Pscian.cpp

Woda.o: Woda.hh Woda.cpp
	g++ ${CPPFLAGS} -o Woda.o Woda.cpp

Dr3D_gnuplot_api.o: Dr3D_gnuplot_api.cpp Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o Dr3D_gnuplot_api.o Dr3D_gnuplot_api.cpp

Dr3D_gnuplot_api.hh: Draw3D_api_interface.hh
	touch Dr3D_gnuplot_api.hh

clear:
	rm main.out main.o Dr3D_gnuplot_api.o SWektor.o SMacierz.o MacObr.o Pscian.o Woda.o
