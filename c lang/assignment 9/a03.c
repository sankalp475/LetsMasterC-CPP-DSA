#include <stdio.h>

int main() {
    int n,i=1,sum;
	printf("Enter the number: ");
    scanf("%d",&n);
    while(i<=n+n) {
        sum += i;
		i+=2;
	}
	printf("the sum of frist %d odd natrual number is: %d",n,sum);
	return 0;
}