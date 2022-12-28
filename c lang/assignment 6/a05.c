#include <stdio.h>

int  main(void) {
    int x;
	printf(" Enter the number: ");
	scanf("%d",&x);

	if(x%7==0 || x%3==0) {
		printf("%d is divisible by %d",x,(x%7==0)?7:3);
	} else {
		printf("%d is not divisible by 7 or 3");
	}
	return 0;
}