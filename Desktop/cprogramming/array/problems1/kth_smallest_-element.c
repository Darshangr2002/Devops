#include<stdio.h>
int temp,a[10];
void main()
{
    int n,m,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n%d smallest element in the array is:%d",m,a[m-1]);
}
void  quicksort(int p,int r)
{
    int pivot,i,j;
    if(p<r)
    {
        pivot=a[p];
        i=p+1;
        j=r;
        while(1)
        {
            while(a[i]<pivot && i<r)
            {
                i++;
            }
            while(a[j]>pivot)
            {
                j--;
            }
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            else
            {
                break;
            }
        }
        a[p]=a[j];
        a[j]=pivot;
        quicksort(p,j-1);
        quicksort(j+1,r);
    }
}