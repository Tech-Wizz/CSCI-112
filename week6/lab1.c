#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Lab 1, Kruize Christensen
//Due Sunday Jan 23 @ 5:00 pm

int sperate(int n){                                                    //the function that prints out the equation, this was also given in class, i also made it return the function
	int sum = 0;
	while(n > 9){                                                  //this is set to 9 so it can add an equal without and addition sign
		int no_zeros = ((int)log10((double)n));
		int ldigit = (int)n/pow(10.0,(double)no_zeros);
		sum = sum + ldigit;                                    //calculation of the function
		printf("%d + ", ldigit);                               //prints a # + 
		n = n - (ldigit * pow(10.0,(double)no_zeros));
	}
	sum = sum + n;
	printf("%d = ", n % 10);                                       //prints the last number and = 
	return (sum);
}

int main(int argc, char** argv){                                                        //the main equation that organises the output
	int num, sum;

	if (argc != 2){
		printf("ERROR: no command line argument\n");
	return(1);
	}

	num = atoi(argv[1]);

	if (num !=0){
		sum = sperate(num);
		printf("%d \n", sum);

		if (sum % 9 == 0) {                            //computes whether the number is divisable 
			printf("Since %d is divisible by 9, %d is divisible by 9 \n", sum, num);
		}else if(sum % 9 != 0){                        //computes if the number isn't divisable
			printf("Since %d is not divisible by 9, %d is not divisible by 9 \n", sum, num);
		}
	}else{                                                 //this is extra so you know the program is done
		printf("Program ended");
		printf("\n");
	}

	return 0;
}
