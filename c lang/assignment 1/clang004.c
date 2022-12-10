#include <stdio.h>

int  main(void) {

	float len, width;
    printf(" Enter the length: " );
	scanf("%f",&len);
    printf(" Enter the width: " );
    scanf("%f",&width);
    float area = len * width;
	printf(" area of rectangle is %.2f\n",area);
	return 0;
}