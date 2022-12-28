#include <stdio.h>

int  main(void) {
    float sp,cp;
	printf(" Enter cost prise (cp), selling prise (sp) of a product: ");
	scanf("%d %d",&cp, &sp);
	float profit,loss,lp,pp;
	if(cp > sp) {
		loss = cp-sp;
        lp = loss/cp*100;
		printf(" loss %% = %.1f%%",lp);
	} else {
		if(cp==sp) {
			printf("no profir no loss");
		} else {
			profit = sp-cp;
	        printf(" profit %% = %.1f%%",profit/cp*100);
		}
	}
	profit = sp-cp;

	return 0;
}