#include<stdio.h>

int main()
{int cyl,initial,n,i,cyldist=0,diff=0;
 printf("For FCFS Disk Scheduling \n");
 printf("Enter the number of cylinders: \n");
 scanf("%d",&cyl);
 printf("Enter the number of pending requests: \n");
 scanf("%d",&n);
 printf("Enter the pending request queue: \n");
 int arr[n];
 for (i=1;i<=n;i++)
 {scanf("%d",&arr[i]);}
 printf("Enter the current head position of the disk: \n");
 scanf("%d",&initial);
 arr[0]=initial;
 for(i=0;i<n;i++)
 {diff=arr[i+1]-arr[i];
  if(diff<0)
  {cyldist=cyldist-diff;}
  else
  {cyldist=cyldist+diff;}
  }
printf("Total distance(in cylinders): %d\n",cyldist);}
