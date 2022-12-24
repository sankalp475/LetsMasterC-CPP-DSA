#include <stdio.h>

int  main(void) {
    int a,b,c;
	printf(" Enter the quadratic equation: ");
	scanf("%dx^2+%dx+%d",&a,&b,&c);
    int x = b*b+4*a*c;
	if(x>0){
		printf(" real & distinct roots");
	} else if(x==0){
		printf(" real & equal roots");
	} else if(x<0) {
        printf(" imaginary roots");
	}
	return 0;
}