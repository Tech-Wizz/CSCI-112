#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

//lab2, Kruize Christensen/

extern int sets[10][6];


//prints the sets of subsets, could not get the extra comma out
void PrintSets(int set1[], int set2[]){
	printf("Set");
	for (int i = 0; set1[i]; ++i){ //prints the first set out
		printf(" %d,", set1[i]);
	}
	printf(" is a subset of");
	for(int j = 0; set2[j]; ++j){ //prints the second set out
		printf(" %d,", set2[j]);
	}
	printf("\n\n");
}
