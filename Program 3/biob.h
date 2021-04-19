#ifndef BIOLOGY_H
#define BIOLOGY_H
#include <iostream>
using namespace std;
#include "Uclass.h"

class Biology : public Class {
public:
	Biology(Uclass&);
	void Print();
};
#endif

