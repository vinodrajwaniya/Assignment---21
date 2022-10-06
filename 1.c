#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employee e;
    printf("Enter employee id ");
    scanf("%d",&e.id);
    printf("\nEnter employee name ");
    fflush(stdin);
    gets(e.name);
    printf("\nEnter employee salary ");
    scanf("%d",&e.salary);
    printf("Name = %s, id = %d, salary %d,",e.name,e.id,e.salary);
    return 0;  
}