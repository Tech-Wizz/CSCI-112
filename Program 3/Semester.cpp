#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "Semester.h"

void Semester::Read(ifstream& ifs) {//reads in the infomation from the file 
	string line;
	while (getline(ifs, line)) {
		UClass one_class;
		one_class.SetFromCsvLine(line);
		ucs.push_back(one_class);
	}
	UClass uc;
}

void Semester::Print() {//prints all 	
	for (UClass uc : ucs) {
		uc.Print();
	}
}

void Semester::Type(string t){//prints all of one type

	Engineering en;
	Computer cs;
	Biology bi;

	for (UClass uc : ucs) {
		if (t.compare("EGEN") == 0){
			if (uc.Type().compare(t) == 0){
				en.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
			}
		}else if (t.compare("CSCI") == 0){
			if (uc.Type().compare(t) == 0){
				cs.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
			}
		}else if (t.compare("BIOB") == 0){
			if (uc.Type().compare(t) == 0){
				bi.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
			}
		}
	}
}

void Semester::Number(string t, string n){//prints a matching type and Number

	Engineering en;
	Computer cs;
	Biology bi;

	for (UClass uc : ucs) {
		if (t.compare("EGEN") == 0){
			if ((uc.Type().compare(t) == 0) && (uc.Number().compare(n) == 0)){
				en.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
			}
		}else if (t.compare("CSCI") == 0){
			if ((uc.Type().compare(t) == 0) && (uc.Number().compare(n) == 0)){
				cs.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
			}
		}else if (t.compare("BIOB") == 0){
			if ((uc.Type().compare(t) == 0) && (uc.Number().compare(n) == 0)){
				bi.Print(uc.Type(), uc.Professor(), uc.Title(), uc.Number());
			}
		}

	}
}
