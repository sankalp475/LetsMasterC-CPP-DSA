#include <stdio.h>

int  main(void) {
    float s1,s2,s3,s4,s5;
	printf(" Enter the marks of five student: ");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

	if(s1 > 33 && s2 > 33 && s3 > 33 && s4 > 33 && s5 > 33) {
		printf("result: passed ");
	} else {
		printf("result: failed ");
	}
	return 0;
}