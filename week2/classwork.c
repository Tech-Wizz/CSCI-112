#include <stdio.h>
#include <math.h>

#define PI 3.14159265

//Week 2 class work, Kruize Christensen

int main(void) {

	//varible 
	double r = 10;
	double A = 0;

	//while loop
	while (r >= 0){

		//the math equation for radius
		A = PI*(r*r);

		//the print functions 
		printf("A circle with a radius of %.2f ", r);
		printf("will have an Area of %.2f ", A);
		printf("\n");

		//how I looped it and made it stop
		r=r - 1;
	}
	return(0);
}
