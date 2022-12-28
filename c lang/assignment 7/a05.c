#include <stdio.h>

int  main(void) {

	int i=1;
	while (i<= 20) {
		if((21-i)%2!=0){
			printf("%d, ",21-i);
		}
	    i++;
	}

	return 0;
}