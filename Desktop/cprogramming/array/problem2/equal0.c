#include<stdio.h>
int check(int [],int );
void main()
{
    int i,a[10],n;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    check(a,n);
}
int check(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
           sum=sum+a[j];
           if(sum==0)
           {
            printf("Subarray found from index %d to %d\n",i,j);
           }
        }
    }
}