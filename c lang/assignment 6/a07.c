#include <stdio.h>

int  main(void) {
    char x;
	printf(" Enter one alphabet (uppercase), or one alphabet (lowercase), or one digit, or one special character: ");
    scanf("%c",&x);
    int uc = x >= 65 && x <= 90;
    int lc = x >= 97 && x <= 122;
    int sp = x >= 32 && x <= 47 || x >= 58 && x <= 64 || x >= 91 && x <= 96 || x >= 123 && x <= 126;
    int digit = x >= 48 && x <= 57;
    if( uc || lc )
        printf(uc?"uppercase":"lowercase");
    else if(sp)
		printf("special character");
	else if(digit)
	    printf("digit");
	return 0;
}