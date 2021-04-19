CFLAGS = -c -Wall

prgm3: main.o Semester.o UClass.o userIn.o
	g++ -o prgm3 -lm main.o Semester.o UClass.o userIn.o

main.o: main.cpp
	g++ $(CFLAGS) main.cpp

Semester.o: Semester.cpp
	g++ $(CFLAGS) Semester.cpp

UClass.o: UClass.cpp
	g++ $(CFLAGS) UClass.cpp

userIn.o: userIn.cpp
	g++ $(CFLAGS) userIn.cpp
