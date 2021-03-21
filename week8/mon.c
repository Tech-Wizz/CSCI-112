#include <stdio.h>
#include <string.h>
#include "grades_t.h"

int main(void){
	//declar grad var
	grade_t g1;
	//ask the user for name and number grade
	printf("\n Enter First Name: ");
	scanf("%s", g1.fname);
	printf("\n Enter Last Name: ");
	scanf("%s", g1.lname);
	printf("\n Enter Grade: ");
	scanf("%lf",&g1.ngrade);
	printf("\n");	

	if (g1.ngrade >= 97.0){
		strcpy(g1.lgrade, "A+");
	}else if(g1.ngrade >= 93.0){
		strcpy(g1.lgrade, "A");
	}else if(g1.ngrade >= 90.0){
		strcpy(g1.lgrade, "A-");
	}else if(g1.ngrade >= 87.0){
		strcpy(g1.lgrade, "B+");
	}else if(g1.ngrade >= 83.0){
		strcpy(g1.lgrade, "B");
	}else if(g1.ngrade >= 80.0){
		strcpy(g1.lgrade, "B-");
	}else if(g1.ngrade >= 77.0){
		strcpy(g1.lgrade, "C+");
	}else if(g1.ngrade >= 73.0){
		strcpy(g1.lgrade, "C");
	}else if(g1.ngrade >= 70.0){
		strcpy(g1.lgrade, "C-");
	}else if(g1.ngrade >= 67.0){
		strcpy(g1.lgrade, "D+");
	}else if(g1.ngrade >= 65.0){
		strcpy(g1.lgrade, "D");
	}else if(g1.ngrade >= 0.0){
		strcpy(g1.lgrade, "F");
	}else{
		strcpy(g1.lgrade, "??");
	}

	printf("Name is : %s %s\n", g1.fname, g1.lname);
	printf("Percentage is : %f\n", g1.ngrade);
	printf("Grade is : %s\n", g1.lgrade);

}
