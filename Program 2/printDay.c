#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

void printOneClass(class_t*, int i);

void printDay(class_t cls[], int count){//searches the list by day and returns all for that day

	char input[10];
	
	printf("\n");
	printf("Enter class days to print (MWF or TR): ");

	scanf(" %[^\n]", input);//added space so it will actually read
	
	for (int i = 0; i < count; i++){//creates a loop incase more then one

		if(strncmp(cls[i].day, input, strlen(input)) == 0){
			printOneClass(cls, i);
		}
	}
	printf("\n");

}
