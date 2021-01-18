#Makefile de Graphicus-01
#Naomie L'Archeveque-Carriere 
# 12 janvier 2021 
#Laboratoire APP1
#
graphicus-02: graphicus-02.o canevas.o forme.o vecteur.o couche.o tests.o
	g++ -o graphicus-02 graphicus-02.o canevas.o forme.o vecteur.o couche.o tests.o

graphicus-01.o: graphicus-02.cpp tests.h
	g++ graphicus-02.cpp -g -c

tests.o: tests.cpp tests.h
	g++ tests.cpp -g -c

canevas.o: canevas.cpp canevas.h tests.h
	g++ canevas.cpp -g -c

couche.o: couche.cpp couche.h canevas.h tests.h
	g++ couche.cpp -g -c

forme.o: forme.cpp forme.h canevas.h tests.h 
	g++ forme.cpp -g -c

vecteur.o: vecteur.cpp vecteur.h couche.h canevas.h tests.h
	g++ vecteur.cpp -g -c
#	
clean:
	rm -f *.o
#fin du makefile
#
