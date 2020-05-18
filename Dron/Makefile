CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17 

__start__: main.out
	./main.out

main.out: Dr3D_gnuplot_api.o main.o SWektor.o SMacierz.o MacObr.o
	g++ -o main.out SWektor.o SMacierz.o main.o Dr3D_gnuplot_api.o -lpthread

main.o: src/main.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o main.o src/main.cpp

SWektor.o: inc/Wektor.hh inc/rozmiar.h src/SWektor.cpp src/Wektor.cpp
	g++ ${CPPFLAGS} -o src/SWektor.o src/SWektor.cpp

SMacierz.o: inc/Macierz.hh src/Macierz.cpp src/SMacierz.cpp
	g++ ${CPPFLAGS} -o SMacierz.o src/SMacierz.cpp

MacObr.o: inc/MacObr.hh src/MacObr.cpp
	g++ ${CPPFLAGS} -o MacObr.o src/MacObr.cpp


Dr3D_gnuplot_api.o: src/Dr3D_gnuplot_api.cpp inc/Dr3D_gnuplot_api.hh
	g++ ${CPPFLAGS} -o Dr3D_gnuplot_api.o src/Dr3D_gnuplot_api.cpp

Dr3D_gnuplot_api.hh: inc/Draw3D_api_interface.hh
	touch inc/Dr3D_gnuplot_api.hh

clear:
	rm main.out main.o Dr3D_gnuplot_api.o SWektor.o SMacierz.o MacObr.o
