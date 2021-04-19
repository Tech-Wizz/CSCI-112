#include <iostream>
#include <fstream>
#include <stdexcept>
#include <string>
using namespace std;
#include "Semester.h"
#include "UClass.h"

void userIn(Semester s){
	char choice;
	string type;
	string num;

	//give varible letter's the value of acctual letters
	char n = 'n';
	char t = 't';
	char q = 'q';

	while (choice != q){//creates a loop until q is called
		//option
		cout << "Choices:" << endl;
		cout << "n - print class given number" << endl;
		cout << "t - print all classes for a given type" << endl;
		cout << "q - Quit" << endl;

		cin >> choice;	
		if(choice == n){ //by class number
			cout << "Enter class type and class number (ex: CSCI 112): " << endl;
			cin >> type;
			cin >> num;
			s.Number(type, num);
		}else if(choice == t){ //by type
			cout << "Enter type (CSCI, EGEN or BIOB): " << endl;
			cin >> type;
			s.Type(type);
		}else if(choice == q){ //quit
			cout << "---Quit---" << endl;
		}else{//in case you fail at letters
			cout << choice << " is not an option" << endl;
		}
	}
}

