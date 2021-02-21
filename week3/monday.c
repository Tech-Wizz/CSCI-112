#include <stdio.h>

//week 3 monday, Kruize

int main(void){
	int first = 0;
	int second = 0;

	for(int i =1; i<=5; i++){
		
		printf("Enter first number to check: ");
		scanf("%d", &first);
		printf("\n");

		printf("Enter second number to check: ");
		scanf("%d", &second);
		printf("\n");

		if (first < second){
			printf("%d is less than %d\n", first, second);
		}else if (first > second){
			printf("%d is greater than %d\n", first, second);
		}else if (first == second){
			printf("%d is equal to %d\n", first, second);
		}else{
			printf("ERROR");
		}
	}
	printf("Program ended");
	return (0);
}
