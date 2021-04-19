#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;
#include "Semester.h"

void userIn(Semester);

int main(void) {
	Semester s;
	ifstream ifs {"/public/pgm3/classes.csv"};

	s.Read(ifs);
	userIn(s);
	s.Print();
	return(0);
}
