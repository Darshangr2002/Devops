//add the principle diagonal elements
#include<stdio.h>
void main()
{
    int a[10][10],n;
    printf("Enter the no of rows and colums:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int count1=0;
    for(int i=0;i<n;i++)
    {
        count1=count1+a[i][i];
    }
    int count2=0;
    int k=0;
    for(int j=n-1;j>=0;j--)
    {
        count2=count2+a[k][j];
        k++;
    }
    int count=count2-count1;
    printf("%d",count);
}