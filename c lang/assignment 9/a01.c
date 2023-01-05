#include <stdio.h>

int  main(void) {

	int n,i=1,sum=0;
	printf(" Enter the number: ");
	scanf("%d",&n);

	while(i<=n) {
		sum += i;
		i++;
	}
	printf("sum of %d natural number is: %d",n,sum);
	return 0;
}