#include <stdio.h>

int  main(void) {

	int n,i=1;
	printf("Enter the number: ");//odd natural number
	scanf("%d",&n);
	int count = n+n;

	while(i<=count){
		// if(i%2!=0){
			printf("%d, ",i);
		// }
		i=i+2;
	}
	return 0;
}