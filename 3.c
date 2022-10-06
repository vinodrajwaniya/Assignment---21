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
    printf("Enter employee name ");
    fflush(stdin);
    gets(e.name);
    printf("Enter employee salary ");
    scanf("%d",&e.salary);

    printf("Name = %s, Id = %d, salary = %d",e.name,e.id,e.salary);
    return 0;
}
