#include <stdio.h>

int  main(void) {

	float cp,sp,profit;
	printf("Enter the cost price(cp) and selling price(sp) of 12 banana: ");
	scanf("%f%f",&cp,&sp);
	profit=(sp-cp)*25/12;

	printf("Profit is %.3f",profit);


	return 0;
}