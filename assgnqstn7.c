#include <stdio.h>
#include <string.h>
int main() {
	char a[100],b[100],x;
	printf("Enter string: ");
	gets(a);
	int n=strlen(a);
	b[0]=a[0];
	b[1]='\0';
	for (int i=0;i<n;i++) {
		x=a[i];
		for(int j=0;j<=strlen(b);j++) {
			if(b[j]==x)
			    break;
			else if(j==strlen(b)) {
				b[j]=x;
				b[j+1]='\0';
				break;
			}
		}
	}
	printf("The modified string is: %s",b);
	return 0;
}