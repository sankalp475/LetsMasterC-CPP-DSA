#include <stdio.h>

int main() {

    char input;
    printf("Enter the character: ");
    scanf("%c",&input);

    if(input >= 65 && input <= 90) {
	   printf(" uppercase ");
    } else if(input >= 97 && input <= 122){
       printf(" lowercase ");
	} else {
		printf("not an alphabet");
	}
   return 0;
}