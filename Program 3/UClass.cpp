#include <iostream>
#include <sstream>
using namespace std;
#include "UClass.h"

void UClass::SetFromCsvLine(string inpl) {

	istringstream line(inpl);
	
	//get the type
	getline(line, type, ' ');

	//get class number/id
	getline(line, cnum, ',');

	//get professor's name
	getline(line, prof, ',');
}

void UClass::Print() {
	cout << type << "-" << cnum << "-" << ctitle << "-" << prof << endl;
}

