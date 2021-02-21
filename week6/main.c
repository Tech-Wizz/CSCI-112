#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

//lab2, Kruize Christensen/

int sets [10][6];

void PrintSets(int[], int[]);
bool IsSubset(int[], int[]);
void Separate(long, int[]);

int main (void){

	//open the file
	FILE* fptr = fopen("/public/lab2/sets.txt", "r");
	
	int cur_set_no = 0;
	long int num;

	//read each number

	while (fscanf(fptr, "%ld", &num) != EOF){
		//separate those numbers and put them in one set
		Separate(num, cur_set_no);
		//in Sparate, add sentinel (0) to the end
	cur_set_no++;
	}
	
	//close the file
	fclose(fptr);
	//compare each set against all other sets to determine if it is 
	//a subset of any other set and print each subset/set combination

	for (int i = 0; i < cur_set_no; i++) { 
		for (int j = 0; j < cur_set_no; j++) {
			if (i != j) {
				//is set j a subject oret   set i
				if (IsSubset(sets[i], sets[j])){
					PrintSets(sets[j], sets[i]);
				}
			}
		}
	}
	printf("\nEnd of lab2!");		
	
	return(0);
}

