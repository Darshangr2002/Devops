#include<stdio.h>
int main()
{
   int a[10],n,temp,i,j;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    j=n-1;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i=i+1;
        j=j-1;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}