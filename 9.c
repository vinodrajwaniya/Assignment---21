#include<stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employee e[100];
    int i,n;
    printf("Enter string length ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nEnter %d employee id ",i+1);
    scanf("%d",&e[i].id);
    printf("\nEnter %d employee name ",i+1);
    fflush(stdin);
    gets(e[i].name);
    printf("\nEnter %d employee salary ",i+1);
    scanf("%d",&e[i].salary);
    }

    for(i=0;i<n;i++)
    {
    printf("\nName = %s, id = %d, salary %d,",e[i].name,e[i].id,e[i].salary);
    }
    return 0;  
}