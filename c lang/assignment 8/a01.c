#include <stdio.h>

int  main(void) {

	int n,i=0;
	printf(" Enter the no. of time to repeat a string: ");
	scanf("%d",&n);
	while(i<n) {
		printf("%d) MySirG \n",i+1);
		i++;
	}
	return 0;
}