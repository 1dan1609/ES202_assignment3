#include <stdio.h>
#include <string.h>
int main() {
	char a[100],b[100];
	printf("Enter string 1: ");
	gets(a);
	printf("Enter string 2: ");
	gets(b);
	printf("The difference in the strings is: %d",strcmp(a,b));
	return 0;
}