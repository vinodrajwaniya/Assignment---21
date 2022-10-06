#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employee e[5],temp;
    int i,j;
    for(i=0;i<3;i++)
    {
    printf("\nEnter employee id ");
    scanf("%d",&e[i].id);
    printf("\nEnter employee name ");
    fflush(stdin);
    gets(e[i].name);
    printf("\nEnter employee salary ");
    scanf("%d",&e[i].salary);
    }

    for(i=0;i<2;i++)
    {
        for(j=i;j<3;j++)
        {
            if((e[i].salary>e[j].salary))
            {
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }

    for(i=0;i<3;i++)
    {
    printf("\nName = %s, id = %d, salary %d,",e[i].name,e[i].id,e[i].salary);
    }
    return 0;  
}