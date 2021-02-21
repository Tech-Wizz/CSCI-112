#include <stdio.h>

//lab3, Kruize Christensen

//Thanks Zoe :) hope it isn't to long

void printMatch(char first, char second, int truth, int group, int amount){//prints matches 
	switch (group){//reads if it's grouping or keeping track of a number
		case 1 :
			switch (truth){//reads if the match of grouping or don't
				case 1 :
					printf("All %c%c match\n", first, second);
					break;
				case 0 :
					printf("All %c%c don't match\n", first, second);
					break;
				default :
					break;
			}
			break;
		case 2 :
			switch (truth){//reads if it is a # or //
				case 1:
					printf("There are %d preprocessor statements\n", amount);
					break;
				case 0 :
					printf("There are %d one line comments\n", amount);
					break;
				default :
					break;
			}
	}			
}

int fileScan(void){//finds the specified symbol and decides if it is grouped

	char c;
	int bracket = 0;
	int par = 0;
	int slash = 0;
	int pound = 0;

	FILE* fptr = fopen("/public/lab3/old_code.c","r");//directs the file, would not work without this

	while ((c = getchar()) != EOF){//counts the matches and what it is looking for
		switch (c){
			case '[' :
				bracket ++;
				break;
			case ']' :
				bracket --;
				break;
			case '(' :
				par ++;
				break;
			case ')' :
				par --;
				break;
			case '#' :
				pound ++;
				break;
			case '/' :
				slash ++;
				break;
			default :
				break;
		}
	}
	//close the file 
	fclose(fptr);
	

	slash = (slash/2);//takes the total and divides by 2 since it's reading just /	

	//(-, -, 1 if match\0 if no, 1 if groups items, place holder)

	switch (bracket){//tells user if {} matches or not 
		case (0) :
			printMatch ('{', '}', 1, 1, 0);
			break;
		case (1) :
			printMatch ('{', '}', 0, 1, 0);
			break;
	}
	
	switch (par){//tells user if () match or not
		case (0) :
			printMatch ('(', ')', 1, 1, 0);
			break;
		case (1) :
			printMatch ('(', ')', 0, 1, 0);
			break;
	}

	printMatch('0', '0', 1, 2, pound);
	printMatch('0', '0', 0, 2, slash);

	return 0;
}


int main(void){
	
	//starts the program
	fileScan();
	return 0;
}
