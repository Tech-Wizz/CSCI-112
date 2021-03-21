#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

int counter();
void printOneClass(class_t*, int);
void userIn(class_t*, int);

void sort(){

	int i;
	char *line;
	line = (char*) malloc(1000);
	class_t cls[20];
	int count;
	count = counter();

	//fopen
	FILE *inFile = fopen("/public/pgm2/classes.csv", "r");

	if (inFile == NULL){//if the file can't be read
		printf("ERROR: File failed to open\n");
	}else{
		
		while ((fgets(line, 300, inFile)) != NULL){
			
			strcpy(cls[i].number, strtok(line, ","));//reads the class number
			strcpy(cls[i].name, strtok(NULL, ","));//read class name
				
			//reads over the extra three numbers
			atoi(strtok(NULL, ","));
			atoi(strtok(NULL, ","));
			atoi(strtok(NULL, ","));					

			cls[i].seats = atoi(strtok(NULL, ","));//reads the seats number
			strcpy(cls[i].professor, strtok(NULL, ","));//reads the professor's name
			strcpy(cls[i].day, strtok(NULL, " "));//reads the days the class is on
			strcpy(cls[i].num, strtok(NULL, ","));//this is the time or that extra number at the end?
					
			i++;
		}
		//fclose
		fclose(inFile);

		userIn(cls, count);//sends to user input
	}
}
