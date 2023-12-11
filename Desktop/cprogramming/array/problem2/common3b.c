#include<stdio.h>
void main()
{
    int m,n,p,a[10],b[10],c[10];
    printf("Enter the no elements of the 3 arrays:");
    scanf("%d%d%d",&m,&n,&p);
    printf("Enter the elements of the 3 arrays:");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<p;i++)
    {
        scanf("%d",&c[i]);
    }
    int i=0,j=0,k=0;
    while(i<m && j<n && k<p)
    {
        if(a[i]==b[j] && b[j]==c[k])
        {
            printf("%d ",a[i]);
            i++;
            j++;
            k++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else if(b[j]<c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}