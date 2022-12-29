#include <stdio.h>

int  main(void) {

	int n,i=1;
	printf("Enter the number: "); // natural number 
	scanf("%d",&n);
	while(i<=n){
		printf("%d, ",i);
		i++;
	}
	return 0;
}