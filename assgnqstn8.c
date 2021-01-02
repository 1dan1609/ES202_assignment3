#include <stdio.h>
#include <string.h>
int main() {
	char s[100],x;
	int vowels=0,consonants=0;
	printf("Enter string: ");
	gets(s);
	for(int i;i<strlen(s);i++) {
		x=s[i];
		if ((x>='a'&&x<='z')||(x>='A'&&x<='Z')) {
			if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
				vowels++;
			else
				consonants++;
		}			
	}
	printf("Vowels: %d\nConsonants: %d",vowels,consonants);
	return 0;
}