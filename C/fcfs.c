#include <stdio.h>

int main()
{
    int process;
    int pid[100];
    int arrival_time[100];
    int burst_time[100];
    printf("Enter no. of processes: ");
    scanf("%d",&process);
    for (int i=0; i<process; i++)
    {
        printf("PID: ");
        scanf("%d",&pid[i]);
        printf("Enter arrival time: ");
        scanf("%d",&arrival_time[i]);
        printf("Enter burst time: ");
        scanf("%d",&burst_time[i]);
    }
    for (int i=0; i<process; i++)
    {
        printf("%d  %d  %d\n",pid[i],arrival_time[i],burst_time[i]);
    }
    int time = 0;
    int tat[100];
    int wt[100];
    for (int i=0; i<process; i++)
    {
        if (time < arrival_time[i]) time = arrival_time[i];
        time += burst_time[i];
        tat[i] = time - arrival_time[i];
        wt[i] = tat[i] - burst_time[i];
    }
    float avgwt;
    for (int i=0; i<process; i++)
    {
        avgwt += wt[i];
    }
    printf("\n");
    printf("Average waiting time: %f",(avgwt/4));
}