#Makefile de Graphicus-01
#Naomie L'Archeveque-Carriere 
# 12 janvier 2021 
#Laboratoire APP1
#
graphicus-01: graphicus-01.o tests.o forme.o
	g++ -o graphicus-01 graphicus-01.o tests.o canevas.o forme.o

graphicus-01.o: graphicus-01.cpp tests.h
	g++ graphicus-01.cpp -g -c

tests.o: tests.cpp tests.h
	g++ tests.cpp -g -c





forme.o: forme.cpp forme.h canevas.h tests.h coordonnee.h
	g++ forme.cpp -g -c
#	
clean:
	rm -f *.o
#fin du makefile
#
