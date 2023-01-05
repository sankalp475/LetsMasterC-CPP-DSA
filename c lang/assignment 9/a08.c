#include <stdio.h>

int  main(void) {
    int n, count = 1, i;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=2; i<=n-1 ;i++) {
        if(n%i==0)
		   break;
	}
    if(i==n) {
		printf(" prime ");
	} else {
		printf(" not a prime ");
	}
	return 0;
}