#include<stdio.h>

struct time
{
    int hr;
    int mint;
    int sec;
};

void diff_between_time(struct time t1, struct time t2, struct time *diff);
int main()
{
    struct time start_time, stop_time ,diff;
    printf("Please enter start time \n");
    printf("Entet hr, mint, and sec: ");
    scanf("%d %d %d",&start_time.hr,&start_time.mint,&start_time.sec);
    printf("Enter the stop time \n");
    printf("Enter  hr, mint, sec: ");
    scanf("%d %d %d",&stop_time.hr,&stop_time.mint,&stop_time.sec );

    diff_between_time(start_time, stop_time, &diff);

    printf("\ntime diff: %d:%d:%d - ",start_time.hr,start_time.mint,start_time.sec);
    printf("%d:%d:%d ",stop_time.hr,stop_time.mint,stop_time.sec);
    printf("= %d:%d:%d \n",diff.hr,diff.mint,diff.sec);
    return 0;
}

void diff_between_time(struct time start, struct time stop, struct time *diff)
{
    while (stop.sec > start.sec)
    {
        --start.mint;
        start.sec += 60;
    }
    diff->sec= start.sec - stop.sec;

    while(stop.mint>start.mint)
    {
        --start.hr;
        start.mint += 60;
    }
    diff->mint = start.mint - stop.mint;
    diff->hr  = start.hr - stop.hr;
}









