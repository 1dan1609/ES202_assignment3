#include <stdio.h>
int main() {
	int *a,*b;
	int num1,num2;
	a=&num1;
	b=&num2;
	printf("Enter num1: ");
	scanf("%d",a);
	printf("Enter num2: ");
	scanf("%d",b);
	*b=*a+*b;
	*a=*b-*a;
	*b=*b-*a;
	printf("now num1: %d\tnum2: %d",num1,num2);
	return 0;
}