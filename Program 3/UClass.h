#ifndef UCLASS_H
#define UCLASS_H

#include <iostream>
#include <string>

using namespace std;

class UClass {
public:
	void SetFromCsvLine(string);
	void Print();
	string Type() const {return type;}
	string Number() const {return cnum;}
	string Title() const {return ctitle;}
	string Professor() const {return prof;}
protected:
	string type;
	string cnum;
	string ctitle;
	string prof;
private:
	//vector<Engineering> egen;
};
#endif /* UCLASS_H */
