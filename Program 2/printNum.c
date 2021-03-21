#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

void printOneClass(class_t*, int);

void printNum(class_t cls[], int count){//searches for class based off of number

	char input[40];
	
	printf("\n");
	printf("Enter Class Number: ");
	scanf(" %[^\n]", input);//added space so it will actually read
	
	for (int i = 0; i < count; i++){//loops in case of more then one
		if(strncmp(cls[i].number, input, strlen(input)) == 0){
			printOneClass(cls, i);
		}
	}
	printf("\n");

}
