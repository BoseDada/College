#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of processes: ");
    scanf("%d",&n);
    int allo_pid[10];
    int allo_x[10];
    int allo_y[10];
    int allo_z[10];
    for (int i=0; i<n; i++)
    {
        printf("Enter allocation PID: ");
        scanf("%d",&allo_pid[i]);
        printf("Enter allocation x: ");
        scanf("%d",&allo_x[i]);
        printf("Enter allocation y: ");
        scanf("%d",&allo_y[i]);
        printf("Enter allocation z: ");
        scanf("%d",&allo_z[i]);
    }
    int max_pid[10];
    int max_x[10];
    int max_y[10];
    int max_z[10];
    for (int i=0; i<n; i++)
    {
        printf("Enter max need PID: ");
        scanf("%d",&max_pid[i]);
        printf("Enter max need x: ");
        scanf("%d",&max_x[i]);
        printf("Enter mex need y: ");
        scanf("%d",&max_y[i]);
        printf("Enter max need z: ");
        scanf("%d",&max_z[i]);
    }
    int current_pid[10];
    int current_x[10];
    int current_y[10];
    int current_z[10];
    for (int i=0; i<n; i++)
    {
        current_x[i] = max_x[i] - allo_x[i];
        current_y[i] = max_y[i] - allo_y[i];
        current_z[i] = max_z[i] - allo_z[i];
    }
    int system_max_x;
    int system_max_y;
    int system_max_z;
    printf("Enter system max x: ");
    scanf("%d",&system_max_x);
    printf("Enter system max y: ");
    scanf("%d",&system_max_y);
    printf("Enter system max z: ");
    scanf("%d",&system_max_z);
    int available_x;
    int available_y;
    int available_z;
    printf("Enter available x: ");
    scanf("%d",&available_x);
    printf("Enter available y: ");
    scanf("%d",&available_y);
    printf("Enter available z: ");
    scanf("%d",&available_z);
    printf("Safe sequence: \n");
    
    for (int i=0; i<n; i++){

    for (int j=0; j<n; j++)
    {
        if (available_x >= current_x[j] && available_y >= current_y[j] && available_z >= current_z[j])
        {
            printf("Process %d\n",j);
            available_x += allo_x[j];
            available_y += allo_y[j];
            available_z += allo_z[j];
            current_x[j] = 100;
            current_y[j] = 100;
            current_z[j] = 100;
            if (available_x == system_max_x && available_y == system_max_y && available_z == system_max_z)
            {
                break;
            }
        }
        
    }
    }
    

}