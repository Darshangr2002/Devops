#include<stdio.h>
typedef struct student
{
    int usn;
    char name[20];
}s;
void main()
{
    printf("Enter no of student details:");
    int n;
    scanf("%d",&n);
     s *ptr;
    ptr=(s *)malloc(n*sizeof(s));
    for(int i=0;i<n;i++)
    {
    scanf("%d %s",&(ptr+i)->usn,&(ptr+i)->name);
    }
    for(int i=0;i<n;i++)
    {
    printf("%d %s",(ptr+i)->usn,(ptr+i)->name);
    }
}