#include<stdio.h>
#include<string.h>
void main()
{
    char str1[20],str2[20],str3[20];
    printf("Enter frst string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    int i=0;
    int j=0;
    while(str1[i]!='\0')
    {
        str3[j]=str1[i];
        i++;
        j++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        str3[j]=str2[i];
        i++;
        j++;
    }
    puts(str3);
}