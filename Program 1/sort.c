#include <stdio.h>
#include <stdlib.h>


void sort(unsigned int myArray[][4], int num) {
    
    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
		unsigned char m;
		if (myArray[i][0] > myArray[j][0]){//swaps values to reorder them in ascending order
			for (int k = 0; k < 4; ++k) { 
                		m = myArray[i][k];
                    		myArray[i][k] = myArray[j][k];
                    		myArray[j][k] = m;                    

                	}	
		}else if(myArray[i][0] == myArray[j][0] && myArray[i][1] > myArray[j][1]){
			for (int k = 0; k < 4; ++k) {
                    		m = myArray[i][k];
                    		myArray[i][k] = myArray[j][k];
                    		myArray[j][k] = m;                    

                	}
		}else if(myArray[i][0] == myArray[j][0] && myArray[i][1] == myArray[j][1] && myArray[i][2] > myArray[j][2]){
			for (int k = 0; k < 4; ++k) { 
                    		m = myArray[i][k];
                    		myArray[i][k] = myArray[j][k];
                    		myArray[j][k] = m;                    
                	}
		}else if(myArray[i][0] == myArray[j][0] && myArray[i][1] == myArray[j][1] && myArray[i][2] == myArray[j][2] && myArray[i][3] < myArray[j][3]){
			for (int k = 0; k < 4; ++k) {
                    		m = myArray[i][k];
                    		myArray[i][k] = myArray[j][k];
                    		myArray[j][k] = m;                    

                	}
            }
        }

    }
    
    return;


//	int largest;
//	int count = 0;
//
//	for(int i = 0; i < n - 1; i++){
//		count = 0;
//		if (addr[i][0] > largest){          //finds the largest number
//			largest = addr[i][0];
//			count = 1;
//		}else if (addr[i][0] == largest){  //counts those equal to the largest number
//			count++;
//		}else{
//			count = count;
//		}
//	}
//	printf("\n%d\n", largest);
//	switch (returnV){
//		case 1:
//                        return largest;
//                case 2:
//                        return count;
//        }
//	return 0;
}

