#include <stdio.h>

int  main(void) {

	int n, count=0,x;
	printf("Enter the number: ");
	scanf("%d",&n);
	x = n;
	while(n) {
        n /= 10;
		count++;
	}
	printf(" no. of digits in %d is %d", x, count);

	return 0;
}