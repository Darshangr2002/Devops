#include<stdio.h>
int peak(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i==0 && arr[0]>arr[1])
        return 0;
        else if(i==n-1 && arr[n-1]>arr[n-2])
        return n-1; 
        else if(arr[i-1]<arr[i] && arr[i+1]<arr[i])
        {
            return i;
        }
    }
}
int main()
{
    int n,a[10];
    printf("Enter the no of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=peak(a,n);
}