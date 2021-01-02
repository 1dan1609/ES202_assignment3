#include <stdio.h>
#include <string.h>
int main() {
	char str[100],charset[100]={0},x;
	int charcount[100]={0},i,j;
	printf("Enter string: ");
	gets(str);
	for(i=0;i<strlen(str);i++) {
		x=str[i];
		for(j=0;j<=strlen(charset);j++) {
			if (x==charset[j]) {
				charcount[j]++;
				break;
			}
			else if(j==strlen(charset)) {
				charset[j]=x;
				charcount[j]++;
				break;
			}
		}
	}
	for(i=0;i<strlen(charset);i++)
		printf("%c: %d\n",charset[i],charcount[i]);
}