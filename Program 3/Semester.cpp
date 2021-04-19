#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Semester.h"

void Semester::Read(ifstream& ifs) {
	string line;
	while (getline(ifs, line)) {
		UClass one_class;
		one_class.SetFromCsvLine(line);
		ucs.push_back(one_class);
	}
}

void Semester::Print() {	
	for (UClass uc : ucs) {
		uc.Print();
	}
}

void Semester::Type(string t){
	for (UClass uc : ucs) {
		if (uc.Type().compare(t) == 0){
			uc.Print();
		}
	}
}

void Semester::Number(string t, string n){
	for (UClass uc : ucs) {
		if ((uc.Type().compare(t) == 0) && (uc.Number().compare(n) == 0)){
			uc.Print();
		}
	}
}
