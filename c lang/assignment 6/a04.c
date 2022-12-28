#include <stdio.h>

int  main(void) {
    int x;
	printf(" Enter the number: ");
	scanf("%d",&x);

	if(x%2==0 && x%3==0){
		printf(" %d is divisible by 2 & 3", x);
	} else {
		printf(" %d is not divisible by 2 & 3", x);
	}
	return 0;
}