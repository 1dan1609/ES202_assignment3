#include <stdio.h>
int main() {
	int a[10][10],b[10][10],c[10][10],n,m;
    int (*ptr1)[10][10],(*ptr2)[10][10],(*ptr3)[10][10];
    ptr1=&a;ptr2=&b;ptr3=&c;
    printf("Enter size of rows and column for A matrix(less than 100): ");
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("Enter the element in %d,%d for A matrix: ",i,j);
            scanf("%d", ptr1[i][j]);
        }
    }
    printf("Enter size of rows and coloumn for B matrix(less than 100): ");
    scanf("%d", &m);
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++) {
            printf("Enter the element in %d,%d for B matrix: ",i,j);
            scanf("%d", ptr2[i][j]);
        }
    if(n==m) {
		printf("yes4");
        for(int i=0;i<m;i++) {
			printf("yes3");
			for(int j=0;j<n;j++) {
				(*ptr3[i][j])=(*ptr1[i][j])+(*ptr2[i][j]);
				printf("yes2");
			}
		}
	}
	printf("yes0");
    for(int i=0;i<m;i++) {
        printf("yes");
		for(int j=0;j<n;j++)
             printf("%d",*ptr3[i][j]);    
	}
    printf("\n");
    return 0;
}