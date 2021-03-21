#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

void printNum(class_t*, int);
void printDay(class_t*, int);
void printProf(class_t*, int);

void userIn(class_t cls[], int count){

	char choice;

	//give varible letter's the value of acctual letters
	char n = 'n';
	char d = 'd';
	char p = 'p';
	char q = 'q';


	while (choice != q){//creates a loop until q is called
		//options
		printf("Choices:\n");
		printf("n - print class given number\n");
		printf("d - print all classes for a given day combo\n");
		printf("p - print all classes for a given professor\n");
		printf("q - Quit\n");

		scanf(" %c", &choice);	
		if(choice == n){ //by class number
			printNum(cls, count);
		}else if(choice == d){ //by day
			printDay(cls, count);
			//scanf("%c", &choice);
		}else if(choice == p){ //by professor
			printProf(cls, count);
			//scanf("%c", &choice);
		}else if(choice == q){ //quit
			printf("---Quit---\n");
			//truth = 0;
		}else{//in case you fail at letters
			printf("%c is not an option\n", choice);
			//scanf("%c", &choice);
		}
	}
}
