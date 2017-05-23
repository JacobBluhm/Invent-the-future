
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
 int menuvalg;

int tal,i;


  printf("Hvor mange observationer har du?\n");
  scanf("%d", &tal);
    float b[tal];

    for(i = 0; i < tal; i++)
    {
      printf("tal nummer %d: ", i + 1);
      scanf("%f", &b[i]);
    }

    float sum, frekvens, m;

    float e2x;
    float mifi,varians, spredning, ex2;
    float et;

    for ( i = 0; i < tal; i++) {

        sum += b[i]; // alle tallene lagt sammen
        m = sum/tal; // gennemsnit


    }
    // printer observationerne
    printf("Observationer   frekvens bidrag til μ\n" );
    printf("+---------------------------------+\n");

    for(i = 0; i < tal; i++)
    {
        frekvens = b[i]/sum;
        mifi = b[i]*frekvens;
        printf("| %10.3f|%10.3f|%10.3f|\n", b[i], frekvens, mifi );
        et += frekvens;
    }
    printf("+---------------------------------+\n" );
    printf("                  = %.3f\n", et );
    printf("\n");

    mifi = 0;
    for(i = 0; i < tal; i++)
    {
      mifi += (b[i]*(b[i]/sum));
    }

    for(i = 0; i <tal; i++)
    {
     e2x += (pow(b[i], 2)*((b[i]/sum)));
    }


     ex2 = pow(mifi,2);
    printf("E(X)^2 = %.3f \t E(X^2) = %.3f\n\n\n", ex2, e2x );

    varians = e2x - ex2;
    spredning = sqrt(varians);
    printf("Varians = %3.3f - %3.3f  = %3.3f\n\n",e2x, ex2, varians);

    printf("Spredning = √%.3f = %3.3f\n",varians, spredning );

}
