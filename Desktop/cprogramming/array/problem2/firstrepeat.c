//finding the first repeating elements in an array
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],n,i;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                printf("%d",a[i]);
                return 0;
            }
        }
    }
}