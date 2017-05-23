#include <stdio.h>
#include <math.h>


int main()
{

int swapped, r, i;
int tal, antal;

printf("hvor mange tal skal du bruge?\n");
scanf("%d",&tal);

int u[tal];
for ( i = 0; i < tal; i++)
{
  printf("Tal nr. %d:\n ", i);
  scanf("%d", &u[i]);

}

  while(1)
  {
    swapped = 0;

    for(r = 0; r < tal; r++)
    {
      if(u[r] > u[r + 1])
      {

        int temp = u[r];
        u[r] = u[r + 1];
        u[r + 1] = temp;

        swapped = 1;

      }
    }
    if(swapped == 0)
    {
      break;
    }
  }

for ( r = 0; r < tal; r++)
    {
    printf("%d\n",u[r] );
    }

if ((tal%2) != 0)
    {
      float median = u[r/2];
      printf("\nMedianen af dine tal = %.1f\n", median );

    }
else if (tal%2 == 0)
    {

        float d = (u[( r - 1)/2]);
        float c = (u[ r/2]);

        float a = (d+c)/2;

        printf("\nMedianen for dine tal = %.2f\n",a);
      }


return 0;
}
