#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAILLE 10

//Exercice 2.1

int main()
{
    int tab[TAILLE];
    int i,x=1;
    int haut=0;
    int bas=1000000000;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&tab[i]);
    }
    do
    {
        if((tab[x] >= tab[x+1])&& (tab[x] >= haut))
        {
        haut = *(tab+x);    //  formalisme pointeur
        // haut=tab[x];     //  formalisme tableau
            x++;
        }else if((tab[x] <= tab[x+1])&&(tab[x]<= bas))
        {
         bas = *(tab+x);    //   formalisme pointeur
         // bas=tab[x];     //   formalisme tableau
            x++;
        }else
        {
            x++;
        }
    }while(x<=10);
    printf("le nombre le plus petit est %d et le nombre le plus grand est %d",bas,haut);
}

// Exercice 2.2

int f6()
{
    printf("Veuillez entrer 10 nombres : \n");
    int tab[TAILLE];
    int i,x=1;
    int haut=0;
    int bas=1000000000;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&tab[i]);
    }
    do
    {
        if((tab[x] >= tab[x+1])&& (tab[x] >= haut))
        {
        haut=tab[x];
            x++;
        }else if((tab[x] <= tab[x+1])&&(tab[x]<= bas))
        {
        bas=tab[x];
            x++;
        }else
        {
            x++;
        }
    }while(x<=10);
    printf("le nombre le plus petit est %d et le nombre le plus grand est %d",bas,haut);
    return;
}

int main()
{
    f6();
}




