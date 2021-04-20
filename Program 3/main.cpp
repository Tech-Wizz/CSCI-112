#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;
#include "Semester.h"

void userIn(Semester);

int main(void) {
	Semester s;
	//reads in the file
	ifstream ifs {"/public/pgm3/classes.csv"};
	s.Read(ifs);
	userIn(s);
	return(0);
}
