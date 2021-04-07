#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

using namespace std;

enum class Gender {man, woman, nonbinary};

class Person {
private:
	string fn; //first name
	string ln; //last name
	int age;
	Gender gen;//gender
	string pn; //phone number
public:
	Person() : fn{""}, ln{""}, age{0}, pn{""} {};
	Person(string first, string last, int a, Gender gender, string pNum)
		: fn{first}, ln{last}, age{a}, gen{gender}, pn{pNum} {};
	void Set(string, string, int, Gender, string);
	string fullN() const {return fn + ln; }
	int Age() const {return age; }
	Gender Gend() const ;
	bool Woman() { return gen==Gender::woman ? true : false; }
	string AreaCode() { return pn.substr(0,3); }
	bool AreaCodeEqual(string);
	bool AreaCodeAgeEqual(string, int);
	bool AreaCodeGenderEqual (string, Gender);
	friend istream &operator>>(istream&, Person&);
}; 
#endif
