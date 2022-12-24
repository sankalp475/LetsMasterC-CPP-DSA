#include <stdio.h>

int  main(void) {
    int x;
	printf(" Enter the number: ");
	scanf("%d",&x);

	if(!(x&1)) {
		printf(" even number ");
	} else {
		printf(" odd number ");
	}
	return 0;
}