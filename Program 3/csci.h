#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
using namespace std;
#include "Uclass.h"

class Computer : public Class {
public:
	Computer(Uclass&);
	void Print();
};
#endif

