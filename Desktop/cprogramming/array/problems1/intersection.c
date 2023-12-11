#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,m;
    printf("Enter the no of elements of frst array:");
    scanf("%d",&m);
    printf("Enter the no of elements of second array:");
    scanf("%d",&n);
    int *ptr1,*ptr2,*ptr3;
    ptr1=(int *)malloc(m*sizeof(int));
    ptr2=(int *)malloc(n*sizeof(int));
    ptr3=(int *)malloc(m*sizeof(int));
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
    int k=0;
    for(int j=0;j<n;j++)
    {
        int count=0;
        for(int i=0;i<m;i++)
        {
            if(*(ptr2+j)==*(ptr1+i))
            {
                count=count+1;
            }
        }
        if(count!=0)
        {
            *(ptr3+k)=*(ptr2+j);
            k=k+1;
        }
    }
    for(int i=0;i<k;i++)
    {
        printf("%d ",*(ptr3+i));
    }
    free(ptr1);
    free(ptr2);
    free(ptr3);
}