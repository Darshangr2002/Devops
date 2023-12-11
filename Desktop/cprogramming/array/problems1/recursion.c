#include<stdio.h>
int fact(int);
void main()
{
    int fac,n;
    printf("Enter the number:");
    scanf("%d",&n);
    fac=fact(n);
    printf("%d",fac);
}
int fact(int n)
{
    if(n==0)
    return;
    else
    {
        return n+fact(n-1);
    }
}