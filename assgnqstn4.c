#include<stdio.h>    
  
int main(){  
    int a[100][100],b[100][100],mul[100][100],r,c,i,j,k;
    int (*ptr1)[100][100],(*ptr2)[100][100],(*ans)[100][100];
    ptr1=&a;ptr2=&b;ans=&mul;
    printf("Enter the number of row = ");    
    scanf("%d",&r);    
    printf("Enter the number of column = ");    
    scanf("%d",&c);    
    printf("Enter the first matrix elements :-\n");    
    for(i=0;i<r;i++)    
        {    
        for(j=0;j<c;j++)    
            {scanf("%d",ptr1[i][j]);}    
        }    
    printf("Enter the second matrix elements :-\n");    
    for(i=0;i<r;i++)    
        {    
        for(j=0;j<c;j++)    
            {scanf("%d",ptr2[i][j]);}    
        }    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
        for(k=0;k<c;k++)    
            {*ans[i][j]+=(*ptr1[i][k])*(*ptr2[k][j]);}    
        }    
    }    
    printf("Resulting after multiplication :-\n");
    for(i=0;i<r;i++)    
        {    
        for(j=0;j<c;j++)    
            {printf("%d\t",*ans[i][j]);}    
        printf("\n");    
        }    
    return 0;  
}
