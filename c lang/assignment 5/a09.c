#include <stdio.h>

int  main(void) {

	int year;
	printf(" Enter the year: ");
	scanf("%d",&year);
	if(year%100) {
		if(year%4)
		   printf("Non leep year");
		else
		   printf("leep year");
	} else {
        if(year%400)
		   printf("Non leep year");
		else
		   printf("leep year");
	}
	return 0;
}