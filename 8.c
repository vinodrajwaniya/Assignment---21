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
    struct employee e[10];
    int i;
    for(i=0;i<10;i++)
    {
    printf("\nEnter employee id ");
    scanf("%d",&e[i].id);
    printf("\nEnter employee name ");
    fflush(stdin);
    gets(e[i].name);
    printf("\nEnter employee salary ");
    scanf("%d",&e[i].salary);
    }

    for(i=0;i<10;i++)
    {
    printf("\nName = %s, id = %d, salary %d,",e[i].name,e[i].id,e[i].salary);
    }
    return 0;  
}