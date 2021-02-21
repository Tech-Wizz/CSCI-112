#include <stdio.h>

int main(void){

	//integer adress
	int *i;
	int a = 10;
	i = &a;

	//double adress
	double *d;
	double t = 8.7;
	d = &t;

	//charater address
	char *c;
	char h = 'h';
	c = &h;

	//print functions for each
	printf("Adress of Int is *i %p\n\n", i);
	printf("Adress of Double is *d %p\n\n", d);
	printf("Adress of Char is *c %p\n\n", c);

	return 0;
}
