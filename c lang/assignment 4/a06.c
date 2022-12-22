#include <stdio.h>

int  main(void) {

    float x, inr_val = 84.23, usd;
	printf(" enter the amount in rupees: ");
	scanf("%f",&x);
    usd = x * 1 / inr_val;
    printf(" the valu of %.1f = %.3f ",x,usd);
	return 0;
}