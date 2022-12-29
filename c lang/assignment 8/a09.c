#include <stdio.h>

int  main(void) {

	int n, i=1;
	printf("Enter no. to get the squire: ");
	scanf("%d",&n);

	while(i<=n) {
		printf("%d, ",i*i*i);
		i++;
	}
	return 0;
}