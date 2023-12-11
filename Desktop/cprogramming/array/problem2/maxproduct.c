#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],n,i,j=1;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        j=1;
        for(int k=i;k<n;k++)
        {
            a[k]=abs(a[k]);
            j=j*a[k];
            if(j>max)
            {
                max=j;
            }
        }
    }
    printf("%d",max);
}