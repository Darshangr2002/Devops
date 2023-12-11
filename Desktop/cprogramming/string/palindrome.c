#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("Enter the string:");
    gets(str);
    int k=strlen(str);
    int i=0;
    int j=k-1;
    int count=0;
    while(i<j)
    {
        if(str[i]==str[j])
        {
            count=1;
        }
        else
        {
            count=0;
        }
        i++;
        j--;
    }
    if(count==1)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("It is not a palindrome");
    }
}