#include<stdio.h>
void main()
{
    int a[20][20],b[20][20],c[20][20],m,n,p,q;
    printf("Enter the no of rows of frst matrix:");
    scanf("%d",&m);
    printf("Enter the no of columns of frst matrix:");
    scanf("%d",&n);
     printf("Enter the no of rows of second matrix:");
    scanf("%d",&p);
    printf("Enter the no of columns of second matrix:");
    scanf("%d",&q);
    printf("Enter the elements of frst matrix:");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of second matrix:");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            int sum=0;
            for(int k=0;k<m;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            c[i][j]=sum;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            scanf("%d",c[i][j]);
        }
    }
}