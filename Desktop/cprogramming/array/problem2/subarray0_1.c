#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[10],n,i;
    printf("Enter the no of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elemnts:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k,m;
    k=0;
    m=n;
    int count=0;
while(k<m)
{
    int one=0,zero=0;
    for(int i=k;i<n;i++)
    {
        if(a[i]==1)
        {
            one++;
        }
        if(a[i]==0)
        {
            zero++;
        }
        if(one==zero)
        {
            printf("%d %d\n",k,i);
            count++;
        }
    }
    k++;
}
printf("%d",count);
}