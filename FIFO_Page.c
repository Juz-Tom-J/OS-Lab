#include<stdio.h>

int main()
{int ref[50],f[10], p_no, f_no, avail, i, j, k, fault=0;
 printf("\nEnter the number of pages: ");
 scanf("%d", &p_no);
 printf("\nEnter the number of frames: ");
 scanf("%d", &f_no);
 for(i = 0; i < f_no; i++)
     f[i] = -1;
 printf("\nEnter the reference string: ");
 for(i = 1; i <= p_no; i++)
     scanf("%d", &ref[i]);
 j = 0;
 printf("Ref string\tFrames\n");
 for(i = 1; i <= p_no; i++)
 {printf("%d\t\t", ref[i]);
  avail = 0;
  for(k = 0; k < f_no; k++)
      if(f[k] == ref[i])
         avail = 1;
      if (avail == 0)
      {f[j] = ref[i];
       j = (j + 1)%f_no;
       fault++;
       for(k = 0; k < f_no; k++)
           printf("%d\t", f[k]);}
  printf("\n");}
  printf("Total page faults: %d\n", fault);
  return 0;}
