#include<stdio.h>
#include<stdlib.h>

int main()
{int reqArr[50], n, head, i, pos, dsk_sz, res=0, j, len, temp;
 printf("Enter the size of request queue: ");
 scanf("%d", &n);
 printf("Enter request queue: ");
 for(i = 1; i <= n; i++)
     scanf("%d", &reqArr[i]);
 printf("Enter initial head position: ");
 scanf("%d", &head);
 printf("Enter number of cylinders: ");
 scanf("%d", &dsk_sz);
 reqArr[0] = head;
 reqArr[n+1] = dsk_sz; 
 for(i=0;i<n+1;i++) 
 {for(j=0;j<n+1;j++) 
  {if(reqArr[j]>reqArr[j+1]) 
   {temp = reqArr[j];
    reqArr[j] = reqArr[j+1];
    reqArr[j+1] = temp;}
   }
  }
  for(i=0;i<n;i++) 
  {if(reqArr[i] == head) 
   {pos = i;
    break;}
   }
   res = reqArr[n+1] - reqArr[pos];  
   printf("C-SCAN: %d", reqArr[pos]);
   for(i = pos+1; i <= n+1; i++)
   printf(" -> %d", reqArr[i]);
   for(i = pos-1; i >= 0; i--)
       printf(" -> %d", reqArr[i]);
   res += abs(reqArr[n+1] - reqArr[pos-2]);
   for(i = 1; i < pos; i++)
       printf(" -> %d", reqArr[i]);
   res += abs(reqArr[pos-1] - reqArr[pos-2]);
   printf("\nTotal Distance(in cylinders): %d\n", res);
   return 0;
}
