#include <stdio.h>

int  main(void) {

	printf(" Enter the time in given format 'HH:MM' : ");
	int h,m;
	scanf("%d:%d",&h,&m);
	printf("HH-%d, MM-%d",h,m);
	return 0;
}