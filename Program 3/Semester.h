#ifndef SEMESTER_H
#define SEMESTER_H

#include <iostream>
#include <vector>
using namespace std;

#include "UClass.h"

class Semester {
public:
	void Read(ifstream&);
	void Print();
	void Type(string);
	void Number(string, string);
private:
	vector<UClass> ucs;
};
#endif


