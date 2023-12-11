#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,m;
    printf("Enter the no of elements of frst array:");
    scanf("%d",&m);
    printf("Enter the no of elements of second array:");
    scanf("%d",&n);
    int *ptr1,*ptr2;
    ptr1=(int *)malloc(m*sizeof(int));
    ptr2=(int *)malloc(n*sizeof(int));
    printf("enter the elements of first array:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",ptr1+i);
    }
    printf("enter the elements of second array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr2+i);
    }
    ptr1=(int *)realloc(ptr1,(m+n)*sizeof(int));
    for(int i=m,j=0;i<(m+n),j<n;i++,j++)
    {
        *(ptr1+i)=*(ptr2+j);
    }
    for(int i=0;i<(m+n);i++)
    {
        printf("%d ",*(ptr1+i));
    }
}