#include <stdio.h>

int  main(void) {
    int a,b,c;
	printf(" Enter three number: ");
	scanf("%d %d %d",&a,&b,&c);

	printf("%d",a>b?a>c?a:c:b>c?b:c);
	return 0;
}