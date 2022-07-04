#include<stdio.h>
 
int main()
{
      int i,n,total = 0,x,counter = 0,quantum;
      int wait_time = 0,turnaround_time = 0,arrival_time[10],burst_time[10],temp[10];
      float avg_wait_time, avg_turnaround_time;
      printf("\nEnter Total Number of Processes: ");
      scanf("%d",&n);
      x = n;
      for(i=0;i<n;i++)
      {
       printf("\nEnter Details of Process[%d]\n",i+1);
       printf("Arrival Time: ");
       scanf("%d", &arrival_time[i]);
       printf("Burst Time: ");
       scanf("%d", &burst_time[i]);
       temp[i] = burst_time[i];
      }
      printf("\nEnter Time Quantum: ");
      scanf("%d",&quantum);
      printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
      for(total = 0,i = 0; x != 0;)
      {if(temp[i]<=quantum && temp[i]>0)
       {total = total + temp[i];
        temp[i] = 0;
        counter = 1;}
       else if(temp[i] > 0)
       {temp[i] = temp[i] - quantum;
        total = total + quantum;}
       if(temp[i] == 0 && counter == 1)
       {x--;
        printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, burst_time[i], total - arrival_time[i], total - arrival_time[i] - burst_time[i]);
        wait_time = wait_time + total - arrival_time[i] - burst_time[i];
        turnaround_time = turnaround_time + total - arrival_time[i];
        counter = 0;}
       if(i == n-1)
       {
        i = 0;
        }
       else if(arrival_time[i + 1] <= total)
       {
        i++;
        }
       else
       {
        i = 0;
        }
      }
 
      avg_wait_time = wait_time * 1.0 / n;
      avg_turnaround_time = turnaround_time * 1.0 / n;
      printf("\n\nAverage Waiting Time:\t%f", avg_wait_time);
      printf("\nAverage Turnaround Time:\t%f\n", avg_turnaround_time);
      return 0;
}
