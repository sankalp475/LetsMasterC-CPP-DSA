#include <stdio.h>

int  main(void) {
    int x,y;
	printf(" Enter two number: ");
	scanf("%d %d",&x,&y);

	if(x>y){
		printf(" %d is greater then %d",x,y);
	} else {
		printf(" %d is greater then %d",y,x);
	}
	return 0;
}