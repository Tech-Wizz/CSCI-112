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

//checks if woman
int numberWomen(vector<Person> ps){
	int num = 0;
	for (int i = 0; i < (int) ps.size(); ++i) {
		if (ps[i].Woman()){
			++num;
		}
	}
	return num;
}

//checks over 50
int over50(vector<Person> ps) {
    int num = 0;
    for (int i = 0; i < (int) ps.size(); i++) {
        if (ps[i].Age() > 50) {
            num++;
        }
    }
    return num;
}

//cheacks for if woman and 506 phonenumber
int women406(vector<Person> ps) {
    int num = 0;
    for (int i = 0; i < (int) ps.size(); i++) {
        if (ps[i].Woman() && ps[i].AreaCode() == "406") {
            num++;
        }
    }
    return num;
}

//checks for people above 50 and with 406 phonenumber
int fifFour(vector<Person> ps) {
    int num = 0;
    for (int i = 0; i < (int) ps.size(); i++) {
        if (ps[i].Age() > 50 && ps[i].AreaCode() == "406") {
            num++;
        }
    }
    return num;
}

int main (void) {

	//create vector of Persons 
	vector<Person> people;  
	
	//opens the file
	ifstream infile;
	infile.open("/public/lab6/people.txt", ios::in);

	//checks if the file opens
	if (!infile.is_open()){
		cout << "Error: Could not open file" << endl;
		return(1);
	}

	Person p;


	while(infile >> p){
		people.push_back(p);
	}

	//F&P number of women in list
	int women = numberWomen(people);
	cout << "Number of women: " << women << endl;
	
	//F&P number of people over 50 i
	int numOver50 = over50(people);
	cout << "Number of people over 50 in list: " << numOver50 << endl;
	
	//F&P number of women with 406 phone
	int numWomen406 = women406(people);
	cout << "Number of women with 406 area code: " << numWomen406 << endl;
	
	//F&P number of people over 50 with 406 phone
	int numFifFour = fifFour(people);
	cout << "Number of women over 50 with 406 area code: " << numFifFour << endl;
	
	//P&P of women in list with 406 phone00
	cout << setprecision(2) << fixed;
	double percentWomen = 0.0;
	percentWomen = ((double)numWomen406 / (double) women) * 100;
	cout << "Percentage of women with 406 area code: " << percentWomen << "%" << endl;
	
	//P&P of over 50 in list with 406 AC
	double percent50_406 = 0.0;
	percent50_406 = ((double)numFifFour / (double)numOver50) * 100;
	cout << "Percentage of people over 50 with 406 area code: " << percent50_406 << "%" << endl;
  
	infile.close();	
	return(0);
}
