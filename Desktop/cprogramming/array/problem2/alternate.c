//arrange the array elements in alternative negtitive and positive no
#include<stdio.h>
void main()
{
    int negative=0,positive=0,i,a[10],b[10],c[10],n,j=0,k=0,p=0;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b[k]=a[i];
            k++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            c[p]=a[i];
            p++;
        }
    }
    int m=k+p;
    if(k>=p)
    {
        k=0;
        p=0;
       while(j<m)
       {
            if(b[k]>0)
            {
                a[j]=b[k];
                j++;
                k++;
            }
            if(c[p]<0)
            {
                a[j]=c[p];
                p++;
                j++;
            }
       }
    }
    else
    {
        k=0;
        p=0;
        while(j<m)
        {
            if(c[p]<0)
            {
                a[j]=c[p];
                p++;
                j++;
            }
            if(b[k]>0)
            {
                a[j]=b[k];
                j++;
                k++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
