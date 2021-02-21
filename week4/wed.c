#include <stdio.h>

//week 4, wednesday Classwork, Kruize

int main (void){
 	
	int fd = 0, sd = 0, num = 0, sum = 0, i = 0, j = 0;
	int arr[6][8];	

	//reads the file
	FILE* fptr = fopen("wed.txt", "r");

	//put the file into a double array 
	while (fscanf(fptr, "%d", &num) != EOF){

		arr[fd][sd] = num;

		if(num == 0){
			fd ++;
			sd = 0;
		}else{
			sd++;
		}
	}	

	//equation for the sum
	for(i = 0; i < fd; i++){
		for(j = 0; arr[i][j] != 0; ++j){
			sum = arr[i][j] + sum;
		}
	}


	printf("The sum is %d\n", sum); //must print out 296


}
