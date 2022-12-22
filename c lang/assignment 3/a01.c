#include <stdio.h>

int  main(void) {

    printf(" 1: size of character constent '%c' is %d \n",'A',sizeof('A'));
    printf(" 2: size of real constent '%.1f' is %d \n",234.5,sizeof(234.5));

	char a = 'A';
	a++;
    printf(" 3: %c \n",a);
	int x = 2342455;
	printf(" 4: %d \n",x%10);
	int z = 234234;
	printf(" 5: number %d without last digit is %d",z,z/10);
	// int c = 12, d = 45;
	// c=c+(d-c);
	// d=d-c;
	// printf(" 4: %d %d\n",c,d);

	return 0;
}