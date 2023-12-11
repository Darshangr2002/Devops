#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int id;
    char name[10];
}node;
void main()
{
    int n;
    printf("Enter the number of students");
    scanf("%d",&n);
    node *ptr;
    ptr=(node *)calloc(n,sizeof(node));
    printf("Enter student details");
    for(int i=0;i<n;i++)
    {
        scanf("%d %s",&(ptr+i)->id,(ptr+i)->name);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %s\n",(ptr+i)->id,(ptr+i)->name);
    }
}