#ifndef ENGINEERING_H
#define ENGINEERING_H
#include <iostream>
using namespace std;
#include "Uclass.h"

class Engineering : public Class {
public:
	Engineering(Uclass&);
	void Print();
};
#endif
