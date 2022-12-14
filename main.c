#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int addOvf(int *result, int a, int b)
{
 // Check for Integer Overflow

 // *result = a + b;
 // if (a > 0 && b > 0 && *result < 0)
 // {
 //  return -1;
 // }
 // else if (a < 0 && b < 0 && *result > 0)
 // {
 //  return -1;
 // }

 if (a > INT_MAX - b)
  return -1;
 else
 {
  *result = a + b;
  return 0;
 }

 return 0;
}

int main()
{
 int *res = (int *)malloc(sizeof(int));
 int x = 2147483640;
 int y = 10;

 printf("%d", addOvf(res, x, y));

 printf("\n %d", *res);
 free(res);
 getchar();
 return 0;
}