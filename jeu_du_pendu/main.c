#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define TAILLE 30

void affichage();
void test(int longueur_mot,char mot[TAILLE],char motJuste[TAILLE]);

int perdu =0;
char mot[TAILLE];
char motJuste[TAILLE];

int main()
{
    int i;
    int longueur_mot;
    printf("Veuillez ecrire un mot : ");
    scanf("%s",mot);
    printf("%s",mot);

    //system("cls");
        longueur_mot = strlen(mot);
    for(i=0;i<longueur_mot;i++)
    {
        mot[i];
        motJuste[i] = '-' ;
    }
    printf("\n%s",mot);
    printf("\n");
    test(longueur_mot,mot,motJuste);
    if(perdu<10)
    {
       system("cls");
       printf("Vous avez gagne !");
    }

    return 0;
}

void affichage()
{
    if (perdu == 1)
    {
      printf("\n");
      printf("\n");
      printf("\n");
      printf("\n");
      printf("__\n");
    }
    if (perdu == 2)
    {
        printf("\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|__\n");
    }
    if (perdu == 3)
    {
        printf("______\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|__\n");
    }
    if (perdu == 4)
    {
        printf("______\n");
        printf("|   |\n");
        printf("|\n");
        printf("|\n");
        printf("|__\n");
    }
    if (perdu == 5)
    {
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|\n");
        printf("|__\n");
    }
    if (perdu == 6)
    {
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|   |\n");
        printf("|__\n");
    }
    if (perdu == 7)
    {
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|  ||\n");
        printf("|__\n");
    }
    if (perdu == 8)
    {
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|  |||\n");
        printf("|__\n");
    }
    if (perdu == 9)
    {
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|  |||\n");
        printf("|__|\n");
    }
    if (perdu == 10)
    {
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|  |||\n");
        printf("|__| |\n");
        printf("Vous avez perdu\n");
    }
}

void test(int longueur_mot,char mot[TAILLE],char motJuste[strlen(mot)])
{
    char StockLettre[strlen(mot)];
    int i;
    int compteur=0;
    while((mot != motJuste) || (perdu < 10))
    {
        printf("Veuillez saisir une lettre : ");
        scanf("%s",StockLettre);
        printf("%s\n",StockLettre);
        perdu=0;
        compteur=0;
       //system("cls");
        for(i=0;i<longueur_mot;i++)
        {
            if(mot[i] == StockLettre[0])
            {
                motJuste[i] = StockLettre[0];
                compteur++;
            }
        }
        printf("\n%s",motJuste);

        if(compteur == 0)
        {
            perdu=perdu+1;
            affichage();
        }
    }
    if(perdu == 10)
    {
        system("cls");
        printf("Vous avez perdu !");
    }
}
