#include <stdio.h> 

void sort(int n, int* ptr) 
{ 
    int i,j,t; 

    for (i=0; i<n; i++) { 
        for (j =i+1; j<n; j++) { 
            if(*(ptr+j)<*(ptr+i)) 
            { 
                t= *(ptr+i); 
                *(ptr+i)= *(ptr+j); 
                *(ptr+j)= t; 
            } 
        } 
    } 
    for (i=0; i<n; i++) 
    {printf("%d ", *(ptr+i));}
}
int main() 
{ 
    int a[100],s;
    printf("Enter size of array : ");
    scanf("%d",&s);
    for(int i=0;i<s;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    sort(s,a); 
    return 0; 
}
