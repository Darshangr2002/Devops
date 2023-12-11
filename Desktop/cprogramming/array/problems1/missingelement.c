#include<stdio.h>
int main()
{
   int a[10],n,temp,i,j;
   printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n-1;j++)
        {
            if(a[j]==i+1)
            {
                count=count+1;
            }
        }
        if(count==0)
        {
            printf("Missing element is %d",i+1);
        }
    }
}
