#include<stdio.h>

int main()
{int i, m, n, pos, k, l, f[10], tot_f, p[50], tot_p, a = 0, b = 0, fault = 0;
 printf("\nEnter the number of pages: ");
 scanf("%d", &tot_p);
 printf("\nEnter the number of frames: ");
 scanf("%d", &tot_f);
 int temp[tot_f];
 for(i = 0; i < tot_f; i++)
     f[i] = -1;
 printf("\nEnter the reference string: ");
 for(n = 1; n <= tot_p; n++)
     scanf("%d", &p[n]);
 printf("Ref string\tFrames\n");
 for(n = 1; n <= tot_p; n++)
 {printf("%d\t\t", p[n]);
  a = 0, b = 0;
  for(m = 0; m < tot_f; m++)
     {if(f[m] == p[n])
        {a = 1;
         b = 1;
         break;}
     }
 if(a == 0)
 {for(m = 0; m < tot_f; m++)
  {if(f[m] == -1)
   {f[m] = p[n];
    b = 1;
    fault++;
    break;}
    }
}
if(b == 0)
{for(m = 0; m < tot_f; m++)
 {temp[m] = 0;}
    for(k = n - 1, l = 1; l <= tot_f - 1; l++, k--)
    {for(m = 0; m < tot_f; m++)
     {if(f[m] == p[k])
      {temp[m] = 1;}
        }
    }
    for(m = 0; m < tot_f; m++)
     {if(temp[m] == 0)
            pos = m;}
    f[pos] = p[n];
    fault++;}
for(m = 0; m < tot_f; m++)
{printf("%d\t", f[m]);}
printf("\n");}
printf("Total page faults: %d\n", fault);
return 0;}
