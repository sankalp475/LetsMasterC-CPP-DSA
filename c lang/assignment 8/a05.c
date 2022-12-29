#include <stdio.h>

int  main(void) {

	int n,i=1;
	printf("Enter the number: ");//odd natural number in reverse order
	scanf("%d",&n);
	int count = n+n;
	while(i<=count-1) {

        printf("%d, ",count-i);
		i=i+2;
	}
	return 0;
}