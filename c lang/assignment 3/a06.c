#include <stdio.h>

int  main(void) {

	int a, b;
	printf(" Enter the two number ");
	scanf("%d %d", &a, &b);
	a = a+b-(b=a);
    printf(" Q9: %d %d ",a,b);
	return 0;
}