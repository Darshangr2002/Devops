#include<stdio.h>
int main()
{
    int a[10],temp,n,b;
    printf("Enter the number of element in the array:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of element to be rotated:");
    scanf("%d",&b);
    for(int j=0;j<b;j++)
    {
        temp=a[0];
        for(int i=0;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        a[n-1]=temp;
    }
    printf("array after rotated is:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}