#include <stdio.h>

int  main(void) {

	float area, r;
	printf(" Enter the radious: ");
	scanf("%f",&r);
	area=3.14*r*r;
	printf(" Area of caircle is %.3f having the radius %.2f",area,r);
	return 0;
}