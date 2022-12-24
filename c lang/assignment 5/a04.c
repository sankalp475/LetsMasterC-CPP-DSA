#include <stdio.h>

int  main(void) {
    int x;
	printf(" Enter the number: ");
    scanf("%d",&x);

	if((x/2)*2==x){
		printf(" even number");
	} else {
		printf(" odd number ");
	}
	return 0;
}