#include <stdio.h>

int  main(void) {

    int a, b, c, totle_sum,avg;
	printf("Enter the three number: ");
    scanf("%d %d %d",&a, &b, &c);
    totle_sum = a+b+c;
	avg = totle_sum/3;
	printf("average of the given number is %d",avg);

	return 0;
}