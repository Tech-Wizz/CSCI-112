#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

//lab2, Kruize Christensen/

int sets [10][6];

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

