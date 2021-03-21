#include <stdio.h>
#include "month.h"

int main(void){
	
	months_t month;

	printf("\nEnter Number: ");
	scanf("%u", &month);

	switch (month - 1){
		case January:
			printf("Month is January\n");
			break;
		case Febuary:
			printf("Month is Febuary\n");
			break;
		case March:
			printf("Month is March\n");
			break;
		case April:
			printf("Month is April\n");
			break;
		case May:
			printf("Month is May\n");
			break;
		case June:
			printf("Month is June\n");
			break;
		case July:
			printf("Month is July\n");
			break;
		case August:
			printf("Month is August\n");
			break;
		case September:
			printf("Month is September\n");
			break;
		case October:
			printf("Month is October\n");
			break;
		case November:
			printf("Month is November\n");
			break;
		case December:
			printf("Month is December\n");
			break;
		default:
			printf("Not a Month Number\n");
			break;
		}
}
		
