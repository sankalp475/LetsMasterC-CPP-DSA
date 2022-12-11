#include <stdio.h>

int  main(void) {

	printf(" Enter the date in given format 'DD/MM/YYYY': ");
	int d,m,y;
	scanf("%d/%d/%d",&d,&m,&y);
	printf(" %d/%d/%d\n",d,m,y);
	printf("day-%d, Month-%d, Year-%d",d,m,y);
	return 0;
}