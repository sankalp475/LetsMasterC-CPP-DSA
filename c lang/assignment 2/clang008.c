#include <stdio.h>

int  main(void) {

	float p,r,t, si;
	printf(" Enter the principle (p) , rate (r) , time (t): ");
    scanf("%f %f %f",&p,&r,&t);
    si = (p*r*t)/100;
	printf(" the simple intrest (s.i) is: %.1f",si);
	return 0;
}