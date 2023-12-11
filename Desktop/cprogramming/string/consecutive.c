#include <stdio.h>
#include<string.h>
void main()
{
    char str[20];
    printf("enter something\n");
    gets(str);
    int i=0,j=0;
   while(str[i]!='\0')
   {
        if(str[i]!=str[i+1])
         {
            str[j]=str[i];
            j++;
         }
        i++;
   }
   str[j]='\0';
    puts(str);
}