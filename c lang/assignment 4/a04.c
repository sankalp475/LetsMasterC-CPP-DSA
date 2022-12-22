#include <stdio.h>

int  main(void) {

	int x;
	printf(" Enter the number: ");
	scanf("%d", &x);
	x = x-(x%10);
	printf(" %d",x);
	return 0;
}