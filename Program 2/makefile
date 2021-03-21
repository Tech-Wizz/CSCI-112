CFLAGS = -c -Wall

prgm2: main.o sort.o count.o userIn.o printOneClass.o printDay.o printNum.o printProf.o
	gcc -o prgm2 -lm main.o sort.o count.o userIn.o printOneClass.o printDay.o printNum.o printProf.c 

main.o: main.c
	gcc $(CFLAGS) main.c

sort.o: sort.c
	gcc $(CFLAGS) sort.c

count.o: count.c
	gcc $(CFLAGS) count.c

userIn.o: userIn.c
	gcc $(CFLAGS) userIn.c

printOneClass.o: printOneClass.c
	gcc $(CFLAGS) printOneClass.c

printDay.o: printDay.c
	gcc $(CFLAGS) printDay.c

printNum.o: printNum.c
	gcc $(CFLAGS) printNum.c

printProf.o: printProf.c
	gcc $(CFLAGS) printProf.c
