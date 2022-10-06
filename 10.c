#include<stdio.h>
#include<string.h>

struct student
{
    int roll_no;
    char name[30];
    int chem_mark;
    int maths_mark;
    int phy_mark;
};

int main()
{
    struct student a[5];
    int i;
    float percentage[5];
    for(i=0;i<5;i++)
    {
        printf("Enter %d roll no. ",i+1);
        scanf("%d",&a[i].roll_no);
        printf("Enter %d name ",i+1);
        fflush(stdin);
        gets(a[i].name);
        printf("Enter %d Chemistry marks ",i+1);
        scanf("%d",&a[i].chem_mark);
        printf("Enter %d Mathematics marks ",i+1);
        scanf("%d",&a[i].maths_mark);
        printf("Enter %d Physics marks ",i+1);
        scanf("%d",&a[i].phy_mark);
    }

    for(i=0;i<5;i++)
    {
        percentage[i] = ((a[i].chem_mark + a[i].maths_mark + a[i].phy_mark)/300.0)*100.0;
    }
    printf("\n\n  !! Result !!\n");
    for(i=0;i<5;i++)
    printf("%s percentage ==> %.2f\n",a[i].name,percentage[i]);
    return 0;
}
