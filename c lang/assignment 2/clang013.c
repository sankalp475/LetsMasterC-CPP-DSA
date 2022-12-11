#include <stdio.h>

int  main(void) {

	printf(" input any three character with space: ");
	char x,y,z;
	scanf("%c %c %c",&x,&y,&z);
	// printf(" ------------------\n");
	// printf("|  CHAR  |  ASCII  |\n");
	// printf("|--------|---------|\n");
	// printf("|   %c    |   %d   |\n",x,x);
	// printf("|--------|---------|\n");
	// printf("|   %c    |   %d   |\n",y,y);
	// printf("|--------|---------|\n");
	// printf("|   %c    |   %d   |\n",z,z);
	// printf(" ------------------\n");
    printf(" ASCII code of '%c' is %d\n ASCII code of '%c' is %d\n ASCII code of '%c' is %d\n",x,x,y,y,z,z);
	return 0;
}