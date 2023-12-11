//recursion method
#include<stdio.h>
int binarysearch(int [],int,int,int);
void main()
{
    int a[10],n;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum;
    printf("Enter the number we want to search:");
    scanf("%d",&sum);
    int count=0;
    count=binarysearch(a,0,n-1,sum);
    printf("Element found at the index %d",count);
}
int binarysearch(int a[],int low,int high,int sum)
{
    int mid;
    
        mid=(low+high)/2;
        if(sum==a[mid])
            return mid;
        else if(sum>a[mid])
        {
            return binarysearch(a,mid+1,high,sum);
        }
        else
        {
            return binarysearch(a,low,mid-1,sum);
        }
    
}