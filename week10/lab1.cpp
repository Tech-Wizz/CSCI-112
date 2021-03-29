#include <iostream>
#include <cmath>
using namespace std;

int sperate(int n){
	int sum = 0, no_zeros, ldigit, t;
	while(n > 9){                                                  //this is set to 9 so it can add an equal without and addition sign
		no_zeros = ((int)log10((double)n));
		ldigit = (int)n/pow(10.0,(double)no_zeros);
		sum = sum + ldigit;                                    //calculation of the function
		cout << ldigit << " + ";                             //prints a # + 
		n = n - (ldigit * pow(10.0,(double)no_zeros));
	}
	sum = sum + n;
	t = n % 10;
	cout << t << " = ";                                       //prints the last number and = 
	return (sum);
}

int main(void){                                                        //the main equation that organises the output
	int num = 1;

	while(num != 0){                                               //inputs the number into the equation
		cout << "Enter an integer to check (0 to end program): ";
       		cin >> num;
		if (num !=0){
			int sum = sperate(num);
			cout << sum << endl;

			if (sum % 9 == 0) {                            //computes whether the number is divisable 
				cout << "Since " << sum << " is divisible by 9, " << num << " is divisible by 9" << endl;
			}else if(sum % 9 != 0){                        //computes if the number isn't divisable
				cout << "Since " << sum << " is not divisible by 9, " << num << " is not divisible by 9" << endl;
			}
		}else{                                                 //this is extra so you know the program is done
			cout << "Program ended" << endl;
		}
	}

	return 0;
}

