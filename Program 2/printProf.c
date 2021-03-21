#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

void printOneClass(class_t*, int i);

void printProf(class_t cls[], int count){//searches for classes based on professor's last or full name

	char input[40];
	
	printf("\n");
	printf("Enter Prfessor's Last Name: ");
	scanf(" %[^\n]", input);//added space so it will actually read
	
	for (int i = 0; i < count; i++){//loops incase of more then one
		if(strncmp(cls[i].professor, input, strlen(input)) == 0){
			printOneClass(cls, i);
		}
	}
	printf("\n");

}
