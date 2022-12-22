#include <stdio.h>

int  main(void) {

    int n;
	printf(" Enter the thre digit number: ");
    scanf("%d",&n);
	printf(" %d ",n%10*100+n/10);
	return 0;
}