#include <stdio.h>

int  main(void) {

	int x,y;
	printf(" Enter a number and digit: ");
	scanf("%d %d", &x, &y);
	x = x * 10 + y;
	printf(" %d ",x);
	return 0;
}