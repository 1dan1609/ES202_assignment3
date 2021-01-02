#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	printf("===MALLOC===\nEnter number of elements in array: ");
	scanf("%d",&n);
	int *mptr=(int *) malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
		printf("%d:%d ",i+1,*(mptr+i));
	printf("\n===CALLOC===\nEnter number of elements in one block: ");
	int x,size;
	scanf("%d",&x);
	printf("Enter size of array: ");
	scanf("%d",&size);
	int *cptr=(int *) calloc(x,size*sizeof(int));
	for(int i=0;i<size;i++)
		for(int j=0;j<n;j++)
			printf("%d,%d:%d ",i+1,j+1,*(cptr+i+j));
	printf("\n===REALLOC===\nEnter new size of previous array: ");
	int newsize;
	scanf("%d",&newsize);
	mptr=(int *)realloc(mptr,newsize*sizeof(int));
	for(int i=0;i<newsize;i++)
		printf("%d:%d ",i+1,*(mptr+i));
	free(mptr);
	free(cptr);
	printf("\nMemory cleared.");
}