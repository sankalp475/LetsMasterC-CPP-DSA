#include <stdio.h>

int  main(void) {

	int fact, n, i=1;
	printf("Enter the number: ");
	scanf("%d",&n);
    fact = n;
	while(i<=n) {
        fact *= (n-i==1 || n-i==0)?1:n-i;
		i++;
	}
	printf(" %d \n",fact);
	return 0;
}