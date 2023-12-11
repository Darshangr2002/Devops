#include<stdio.h>
void main()
{
    int a[10],n,i,j;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum,count=0;
    printf("Enter the number we want to find:");
    scanf("%d",&sum);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("Sum found in the index %d and %d\n",i,j);
                count++;
            }
        }
    }
    printf("The number of pairs is %d",count);
}