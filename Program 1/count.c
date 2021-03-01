#include <stdio.h>
#include <stdlib.h>

int count(unsigned int addr[][4], int n, int total){
	int a = 0;
	int b = 0;
	int c = 0;
	int ida, idb, idc;
	int ahost = 1;
	int bhost = 1;
	int chost = 1;
	int atp = 1;
	int btp = 1;
	int ctp= 1;

	for (int i = 0; i < total; i++) { //gets number of networks in each class
		if (addr[i][0] < 128) { //handles A type
			if (addr[i][0] == addr[i + 1][0]) {
				ahost++;
                		if (ahost > atp) {
	                    		atp++;
       	             			ida = i + 1;
                		}
                	}else if (addr[i][0] != addr[i + 1][0]) {
                		a++;
             		   	ahost = 1;
            		}
        	}else if (addr[i][0] < 192) { //handles B type
               	 	if (addr[i][0] == addr[i + 1][0]) {
				if(addr[i][0] == addr[i + 1][1]){
                 			bhost++;
                        		if (bhost > btp) {
                                		btp = bhost;
                                		idb = i + 1;
                         		}
				}else if (addr[i][1] != addr[i + 1][1]) {
                         		b++;
                         		bhost = 1;
                		}
			}else if (addr[i][0] != addr[i + 1][0]){
				b++;
			}
         	}else if (addr[i][0] < 224) { //handles C type
                 	if (addr[i][0] == addr[i + 1][0]) {
                        	if (addr[i][1] == addr[i + 1][1]){
					if (addr[i][2] == addr[i + 1][2]){ 
						chost++;
                         			if (chost > ctp) {
                                 			ctp = chost;
                                 			idc = i + 1;
                         			}
					}else if (addr[i][2] != addr[i + 1][2]) {
                         			c++;
                         			chost = 1;
                 			}
				}else if (addr[i][1] != addr[i + 1][1]){
					c++;
					chost = 1;
				}
			}else if (addr[i][0] != addr[i + 1][0]){
				c++;
			}
		}
	}
	
	switch (n){
		case 0:
			return (a);
			break;
		case 1:
			return (ida);
			break;
		case 2:
			if (ahost > total){
				ahost = -1;
			}
			return (ahost);
			break;
		case 3:
			return (b);
			break;
		case 4:
			return (idb);
			break;
		case 5:
			if (bhost > total){
				bhost = -1;
			}
			return (bhost);
			break;
		case 6:
			return (c);
			break;
		case 7:
			return (idc);
			break;
		case 8:
			if (chost > total){
				chost = -1;
			}
			return (chost);
			break;
	}
			

 







	//resets the count
//	int count = 1;                 
//	for(int i = 0; i < total; i++){                       //creates a loop for I
//		for(int j = 1; j < (total-1); j++){           //creates a loop for j
//			if(addr[i][n] == (-1)){               //reads if -1 so it doesn't count a doplicate
//				count = count;
//			}else if (addr[i][n] == addr[j][n]){
//				addr[j][n] = (-1);           //changes it to -1 to not count the same number
//				count = count;
//			}else if (addr[i][n] != addr[j][n]){ //if a new number count it
//				count++;
//			}else{                               //if reads something else don't add to count
//				count = count;
//			}
//		}
//	}
	return(-1);
}
