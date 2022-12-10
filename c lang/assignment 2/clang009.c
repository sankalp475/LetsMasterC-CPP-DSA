#include <stdio.h>

int  main(void) {

	float l,b,h, vol;
	printf("Enter the length (l), breadth (b), height (h): ");
	scanf("%f %f %f",&l,&b,&h);
	vol = l*b*h;
	printf("the volume of cuboide is %.3f",vol);
	return 0;
}