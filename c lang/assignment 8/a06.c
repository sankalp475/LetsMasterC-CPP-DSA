#include <stdio.h>

int  main(void) {

	int n, i=2;

	printf("Enter the number to print N even naturl number: "); //even natural number 
	scanf("%d",&n);

	while(i<=n+n){
		printf("%d, ",i);
		i=i+2;
	}
	return 0;
}