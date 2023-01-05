#include <stdio.h>

int main() {
	int n, i=1,sum;
	printf("Enter the number: ");
    scanf("%d",&n);
	while(i<=n){
		sum += (i*i);
		i++;
	}
	printf("sum of sqware of %d natural number is: %d",n,sum);
	return 0;
}