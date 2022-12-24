#include <stdio.h>

int  main(void) {
    int x;
	printf(" Enter te number: ");
	scanf("%d",&x);

	if(x>=100 && x<=999) {
		printf("three digit number ");
	} else {
		printf("not a three digit number ");
	}
	return 0;
}