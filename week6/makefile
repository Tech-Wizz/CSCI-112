CFLAGS = -c -Wall

main.o: main.c
	gcc -c -Wall main.c

sep.o: sep.c
	gcc -c -Wall sep.c

issubset.o: issubset.c
	gcc -c -Wall issubset.c

print.o: print.c
	gcc -c -Wall print.c

lab2: main.o sep.o issubset.o print.o
	gcc -o lab2 -lm main.o sep.o issubset.o print.o
