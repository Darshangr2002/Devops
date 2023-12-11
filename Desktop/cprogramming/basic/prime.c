#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("Enter the element:");
    scanf("%d",&n);
    if((n==0) || (n==1))
    {
        flag=1;
    }
    else
    {
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("It is a not a prime no\n");
    }
    else
    {
        printf("It is a prime no");
    }
}