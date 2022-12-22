#include <stdio.h>

int  main(void) {

	int a;
	printf(" Enter the number: ");
	scanf("%d",&a);
    int sum = a/10/10%10 + a/10%10 + a%10;
    printf(" the sum of three digits is %d",sum);

	return 0;
}