#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include "Person.h"
using namespace std;

void Person::Set(string first, string last, int a, Gender gender, string pnum){
	fn = first;
	ln = last;
	age = a;
	gen = gender;
	pn = pnum;
}

istream& operator>>(istream &input, Person &p){
	int genN;
	input >>p.fn >> p.ln>> p.age>> genN >> p.pn;
	p.gen = (Gender)genN;
	return input;
}

//int NumberWomen(vector<Person> ps){
//	int num;
//	for (int i = 0; i < ps.size(); ++i) {
//		if (ps[i].Woman()){
//			++num;
//		}
//	}
	//return num;
//}

int main (void) {

	//create vector of Persons 
	vector<Person> people;  

	ifstream infile;
	infile.open("/public/lab6/people.txt", ios::in);

	if (!infile.is_open()){
		cout << "Error: Could not open file" << endl;
		return(1);
	}

	Person p;


	while(infile >> p){
		people.push_back(p);
	}

	//create input file stream
	//read in each Person from the file
	//Person p;
	//while input file stream >>p
		//people.push back(p);
	
	//F&P # women
	//int numwomen = NumberWomen(people);
	//F&P # women w/ 406AC
	//F&_
	return(0);
}
