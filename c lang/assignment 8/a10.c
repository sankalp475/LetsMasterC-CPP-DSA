#include <stdio.h>

int  main(void) {
	int n, i=1;
	printf("Enter the number for which table u need: ");
	scanf("%d",&n);

	while(i<=n){
		printf(" %d x %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}