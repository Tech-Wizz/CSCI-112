#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

void printOneClass(class_t cls[], int i){
	//prints one class
	printf("%-35s %-11s %-25s %-3d %-5s %s", cls[i].name, cls[i].number, cls[i].professor, cls[i].seats, cls[i].day, cls[i].num);
}
