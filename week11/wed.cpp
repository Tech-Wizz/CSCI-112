#include <iostream>
#include <math.h>

using namespace std;

namespace One {
double func(int x) {
	double power = x;
	power = pow(power, 3.0);
	return power;
}
}

namespace Two{
double func(int x) {
	double square = x;
	square = sqrt(square);
	return square;
}
}

int main(void) {

	int x;
	int choice; 

	cout << "Enter number: ";
	cin >> x;

	cout << "Enter 2 to find squar root of your number" << endl;
	cout << "Enter 3 to find the your number to the 3rd power" << endl;
	cin >> choice;

	if (choice == 3){
		cout << x << " to the 3rd power is " << One::func(x) << endl;
	}else if(choice == 2){
		cout << "The sqrt of " << x << " is " << Two::func(x) << endl;
	}else{
		cout << "Incorrect input ending program" << endl;
	}

	return(0);
}
