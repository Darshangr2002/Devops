#include<stdio.h>
int main()
{
    int a[10],b[10],n;
    printf("Enter the number of element in the array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            b[temp]=a[i];
            temp=temp+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[temp]=a[i];
            temp=temp+1;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}