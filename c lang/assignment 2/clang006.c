#include <stdio.h>

int  main(void) {

    int a,b,c;
	float avg;
	printf("Enter the three number: ");
    scanf("%d %d %d",&a, &b, &c);
	avg = (a+b+c)/3.0;
	printf("average of the given number is %.2f",avg);

	return 0;
}