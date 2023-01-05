#include <stdio.h>

int  main() {
    int n, i=2, sum=0;
	printf("Enter the number: ");
	scanf("%d",&n);

	while(i<=n+n) {
		sum += i;
        i=i+2;
	} 
   printf("sum of %d even natural number is: %d",n,sum);
	return 0;
}