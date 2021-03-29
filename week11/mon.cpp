#include <iostream>
#include <stdexcept>
using namespace std;

void error(string s){
	throw runtime_error("ERROR: " + s);
}

int main(void){
	cout << "Please enter an even integer in range[1 .. 50]" << endl;

	int x;
	string msg;

	cin >> x;

	if (!cin){
		error("Did not get a value");
	}else if (x < 1 || 50 < x){
		msg = "Input (" + to_string(x) + ") is out of bounds!";
		error(msg);
	}else if (x%2){
		msg = "Input (" + to_string(x) + ") is not even!";
		error(msg);
	}
}
