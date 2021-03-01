#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print(int, int, int, int, int, int, int, int, int);
void sort(int[][3], int);
int count(int[][3], int, int);

int main (int argc, char** argv){
	//(a,b,c) counting unique networks|id is largest network| bhost is the number of host in largest network
	int a, b, c, num, ida, idb, idc, ahost, bhost, chost;
	
//read in a file with run.sh and using argc, argv
	//look at new lab1

	if (argc != 2){
		printf("ERROR: no command line argument\n");
	return(1);
	}
	
	num = atoi(argv[1]);//sometimes works on finding the size of file
	//printf("%d", num);
	int addr[8000][3];

	int j = 0;
	while (!feof(stdin)){
		fscanf(stdin, "%d.%d.%d.%d", &addr[j][0], &addr[j][1], &addr[j][2], &addr[j][3]);
		j++;
	}
	
	sort(addr,num);

	a = count(addr, 0, num);
	b = count(addr, 3, num);
	c = count(addr, 6, num);
	ida = count(addr, 1, num);
	idb = count(addr, 4, num);
	idc = count(addr, 7, num);
	ahost = count(addr, 2, num);
	bhost = count(addr, 5, num);
	chost = count(addr, 8, num);
	
	print(a, b, c, ida, idb, idc, ahost, bhost, chost);//print stament  	 
//comand line arguments 
	//not enough print error + executable 

//Convert number of addresses into an int

//read each address into a 2 dimentional array
	//sort array (sort the addresses)

//count networks
	//find which network has the largest amount of host
		//determin if more then 1

//print the class info
	//running pgm1 with **** addresses
	//Class n has *** networks
	//Largest n network is ** with ** host
		//if all are same/only one

	return(1);
}
