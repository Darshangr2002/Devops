//Remove dulpicate elements in sorted array
#include<stdio.h>
void main()
{
    int arr[10],n,i;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr[j]=arr[i];
            j++;
        }
    }
    if(arr[n-2]==arr[n-1])
    {
        arr[j]=arr[n-2]
    }
    else
    {
        arr[j]=arr[n-2];
        j++;
        arr[j]=arr[n-1];
    }
     for(int i=0;i<=j;i++)
    {
        printf("%d ",arr[i]);
    }
}