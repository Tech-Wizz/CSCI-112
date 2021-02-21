#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

//lab2, Kruize Christensen/

extern  int sets [10][6];

bool IsSubset(int set1[], int set2[]){
	//take every element of set2 and check to see if it is in set 1
	int j;
	for (int i = 0; set2[i] != 0; ++i){ 
		for (j = 0; set1[j] != 0; ++j){
			if (set2[i] == set1[j]){
				break;
			}
		}
		if (set1[j] == 0){
	//		you hit the end of set 1 without finding it
			return 0;
		}
	}
	return 1;

}
