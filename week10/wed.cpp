#include <iostream>
#include <vector>
using namespace std;

int main(void){

	vector<int> inNum;
	int number = 0;
	int sum = 0;
	
	while (cin >> number){
		inNum.push_back(number);
	}

	for (int i : inNum){
		sum += i;
	}

	if (sum % 5 == 0){
		cout << "Sum: " << sum << " is divisible by 5 \n";
	}else{
		cout << "Sum: " << sum << " is not divisible by 5 \n";
	}
}
