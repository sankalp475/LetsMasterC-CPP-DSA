#include <stdio.h>

int  main(void) {

	int n,i=0;
    printf("enter the numer");// even natural number in reverse order
	scanf("%d",&n);

	while(i<n+n) {
        printf("%d, ",n+n-i);
		i=i+2;
	}
	return 0;
}