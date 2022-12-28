#include <stdio.h>

int  main(void) {
    int x;
	printf(" Enter the number: ");
	scanf("%d",&x);
    printf((x>0)?"positive":!(x<0)?"zero":"negative");
	return 0;
}