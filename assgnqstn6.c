#include <stdio.h>
int main() {
	char x[100],y[100];
	char *a=x,*b=y;
	printf("Enter string one: ");
	gets(a);
	printf("Enter string two: ");
	gets(b);
	while(*a) 
		a++;
	while(*b) {
		*a=*b;
		a++;
		b++;
	}
	*a='\0';
	printf("The concatenated string is: %s",x);
	return 0;
}