#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*//exercice 1:
  int i, n, som;
  som = 0;
  i = 0;
  while(i<4)
  {
      printf ("donnez un entier ");
      scanf ("%d",&n);
      som += n;
      i++;
  }
  printf ("Somme : %d\n", som);

  i = 0;
  som = 0;
    do
    {
        printf ("donnez un entier ");
        scanf ("%d",&n);
        som += n;
        i++;
    }
    while (i<4);
    printf("Somme : %d\n", som);*/


    //exercice 2:

    float note, moy;
    int compt = 0;
    moy=0;

    while(note>=0)
    {
    compt+=1;
    printf ("donnez votre note ");
    scanf("%f\n", &note);
    moy += note;
    }
    moy = moy / compt;
    printf("la moyenne de ces %d notes : %f", compt, moy);

}

