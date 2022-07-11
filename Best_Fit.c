#include <stdio.h>
int main()
{
int b[20], f[20], bno, fno;
int i, j, temp;
static int barr[20], farr[20];
printf("\nMemory Management Scheme - Best Fit");
printf("\nEnter the number of blocks:");
scanf("%d", &bno);
printf("Enter the number of files:");
scanf("%d", &fno);
int lowest = 9999;
printf("\nEnter the size of the blocks:\n");
for (i = 1; i <= bno; i++)
{printf("Block no.%d:", i);
scanf("%d", &b[i]);
}
printf("\nEnter the size of the files :\n");
for (i = 1; i <= fno; i++)
{
printf("File no.%d:", i);
scanf("%d", &f[i]);
}
for (i = 1; i <= fno; i++)
{
for (j = 1; j <= bno; j++)
{
if (barr[j] != 1)
{
temp = b[j] - f[i];
if (temp >= 0)
if (lowest > temp)
{
farr[i] = j;
lowest = temp;
}
}
}
barr[farr[i]] = 1;
lowest = 10000;
}
printf("\nFile_no\tFile_size\tBlock_no\tBlock_size");
for (i = 1; i <= fno && farr[i] != 0; i++)
{printf("\n%d\t\t%d\t\t%d\t\t%d", i, f[i], farr[i], b[farr[i]]);
}
printf("\n");
}
