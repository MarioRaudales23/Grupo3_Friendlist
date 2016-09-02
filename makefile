temp: main.o contactos.o amigos.o companeros.o familiares.o castigos.o
	g++ main.o contactos.o amigos.o companeros.o familiares.o castigos.o -o temp

main.o:	main.cpp contactos.h amigos.h companeros.h familiares.h castigos.h 
	g++ -c main.cpp

contactos.o:	contactos.cpp contactos.h
	g++ -c contactos.cpp

amigos.o:	amigos.cpp contactos.h  amigos.h
	g++ -c amigos.cpp

companeros.o:	companeros.cpp contactos.h  companeros.h
	g++ -c companeros.cpp

familiares.o:	familiares.cpp contactos.h  familiares.h
	g++ -c familiares.cpp

castigos.o:	castigos.cpp contactos.h  castigos.h
	g++ -c castigos.cpp