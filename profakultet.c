
#include <stdio.h>
#include <math.h>

int main()
{
int n, x;
double q = 1;
printf("Dit tal: \n");
scanf("%d", &x);
  for(n = 1; n <= x; n++)
  {
    q = q * n;
  }
  printf("%d! = %.lf\n",x,q );



  return 0;
}
