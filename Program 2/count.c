#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

int counter(){

	//this file counts how many classes there are total

	int lcount = 0;
	char line;

	//fopen
	FILE *inFile = fopen("/public/pgm2/classes.csv", "r");

	if (inFile == NULL){
		printf("ERROR: File failed to open\n");
	}else{
		while ((line = getc(inFile)) != EOF) { //gives number of lines
			if (line == '\n') { 
				++lcount; 
			}
		}
	}
	//fclose
	fclose(inFile);
	return lcount;
}
