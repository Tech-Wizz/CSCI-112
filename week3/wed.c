#include <stdio.h>

//week 3 wed, Kruize Christensen

int main(void){

	int nums[10];
	
	int i = 0;
	
	while (scanf("%d", &nums[i]) == 1) {
		i++;
	}

	for (int k = i-1; k >= 0; k--){
		printf("%d ", nums[k]);
	}

	printf("\n%d numbers read in\n", i);

	return(0);
}

