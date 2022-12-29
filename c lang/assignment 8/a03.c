#include <stdio.h>

int main () {

    int n,i=1;
	printf("Enter the number: ");// natural number in reverse order
	scanf("%d",&n);

	while(i<=n) {
		printf("%d, ",(n+1)-i);
		i++;
	}

	return 0;
}