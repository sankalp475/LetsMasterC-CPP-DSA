#include <stdio.h>

int  main(void) {

	int x;
	printf(" Etner the number: ");
	scanf("%d",&x);

	if(x%5==0){
		printf(" divisible by 5");
	} else {
		printf(" not divisible by 5");
	}
	return 0;
}