#include <stdio.h>
#include <string.h>

int main(){
	char line[80];
	char *token;

	FILE* fptr = fopen("/public/pgm1/inpa.txt", "r");
	
	while (fgets(line, 80, fptr) != NULL) {
		
		token = strtok(line, ".");

		token = strtok(NULL, ".");	
		
		token = strtok(NULL, ".");

		token = strtok(NULL, ".");
	}
	fclose(fptr);

	return(0);
}
