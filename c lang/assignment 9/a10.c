#include <stdio.h>

int  main(void) {

    int n,y=0,x=0;
	printf("Enter the number: ");
	scanf("%d",&n);
    x=n;
	while(n){
        y = y*10+n%10;
	    n = n/10;
	}
	printf(" <before> %d\n <after>  %d",x,y);

	return 0;
}