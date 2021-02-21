#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

//lab2, Kruize Christensen/

extern int sets[10][6];

int Separate (long int n, int g){ //sparates the array into sparate values
	int t = 0;
	while (n > 1){
		sets[g][t] = n % 10;
		n /= 10;
		t++;
	}
	sets[g][t] = n % 10;
	return 1;
}
