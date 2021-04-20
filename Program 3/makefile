CFLAGS = -c -Wall

prgm3: main.o Semester.o UClass.o userIn.o Egen.o Csci.o Biob.o
	g++ -o prgm3 -lm main.o Semester.o UClass.o userIn.o Egen.o Csci.o Biob.o

main.o: main.cpp
	g++ $(CFLAGS) main.cpp

Semester.o: Semester.cpp
	g++ $(CFLAGS) Semester.cpp

UClass.o: UClass.cpp
	g++ $(CFLAGS) UClass.cpp

userIn.o: userIn.cpp
	g++ $(CFLAGS) userIn.cpp

Egen.o: Egen.cpp
	g++ $(CFLAGS) Egen.cpp

Csci.o: Csci.cpp
	g++ $(CFLAGS) Csci.cpp

Biob.o: Biob.cpp
	g++ $(CFLAGS) Biob.cpp
