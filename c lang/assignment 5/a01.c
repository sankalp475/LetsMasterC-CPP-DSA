#include <stdio.h>

int  main(void) {

	int x;
	printf(" enter the number to check if it is positive or not: ");
	scanf("%d",&x);
	// if(x>0) {
    //    printf(" it is positive number");
	// } else {
    //    printf(" it is non positive number");
	// }

	x>0? printf("positive number"): printf("non positive number");
	return 0;
}