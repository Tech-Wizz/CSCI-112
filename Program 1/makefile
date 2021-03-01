CFLAGS = -c -Wall

prgm1: main.o count.o sort.o print.o
	gcc -o prgm1 -lm main.o count.o sort.o print.o

main.o: main.c
	gcc $(CFLAGS) main.c

count.o: count.c
	gcc $(CFLAGS) count.c 

sort.o: sort.c
	gcc $(CFLAGS) sort.c

print.o: print.c
	gcc $(CFLAGS) print.c
 

