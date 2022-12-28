#include <stdio.h>

int  main(void) {
    int a,b,c;
	printf(" Enter length of each side of triangle: ");
	scanf("%d %d %d",&a,&b,&c);

	if(b + c > a && a + c > b && a + b > c) {
		printf(" valid triangle");
	} else {
	    printf(" invalid triangle");
	}
	return 0;
}