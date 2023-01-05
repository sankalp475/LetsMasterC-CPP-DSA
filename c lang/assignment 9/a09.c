#include <stdio.h>

int  main(void) {

	int l, a,b;
	printf(" Enter the number: ");
	scanf("%d %d",&a,&b);

	for(l=a>b?a:b;l<=a*b;l++){
		if(l%a==0&&l%b==0)
		   break;
	}
	   printf(" %d is lcm ",l);
	return 0;
}