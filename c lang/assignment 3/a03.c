#include <stdio.h>

int  main(void) {

	int a, b;
	printf(" Enter the two number ");
	scanf("%d %d", &a, &b);
	a = a+b;
	b = a-b;
	a = a-b;
    printf(" Q7: %d %d ",a,b);
	return 0;
}