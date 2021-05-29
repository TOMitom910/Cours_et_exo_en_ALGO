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
    system("cls");
    longueur_mot = strlen(mot);
    for(i=0;i<longueur_mot;i++)
    {
        motJuste[i] = '-' ;
    }
    test(longueur_mot,mot,motJuste);
    return 0;
}

void affichage()
{
    if (perdu == 1)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("__\n");
    }
    if (perdu == 2)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|__\n");
    }
    if (perdu == 3)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("______\n");
        printf("|\n");
        printf("|\n");
        printf("|\n");
        printf("|__\n");
    }
    if (perdu == 4)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("______\n");
        printf("|   |\n");
        printf("|\n");
        printf("|\n");
        printf("|__\n");
    }
    if (perdu == 5)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|\n");
        printf("|__\n");
    }
    if (perdu == 6)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|   |\n");
        printf("|__\n");
    }
    if (perdu == 7)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|  ||\n");
        printf("|__\n");
    }
    if (perdu == 8)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|  |||\n");
        printf("|__\n");
    }
    if (perdu == 9)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|  |||\n");
        printf("|__|\n");
    }
    if (perdu == 10)
    {
        system("cls");
        printf("%s\n",motJuste);
        printf("______\n");
        printf("|   |\n");
        printf("|   0\n");
        printf("|  |||\n");
        printf("|__| |\n");
        system("cls");
    }
}

void test(int longueur_mot,char mot[],char motJuste[strlen(mot)])
{
    char StockLettre[strlen(mot)];
    int i;
    int compteur=0;
    while((mot == motJuste) || (perdu != 10))
    {
        affichage();
        printf("Veuillez saisir une lettre : ");
        scanf("%s",StockLettre);
        compteur=0;
        system("cls");
        for(i=0;i<longueur_mot;i++)
        {
            if(mot[i] == StockLettre[0])
            {
                motJuste[i] = StockLettre[0];
                compteur++;
            }
        }
        printf("%s\n",motJuste);

        if(compteur == 0)
        {
            perdu=perdu+1;
            affichage();
        }
    }
    if(perdu >= 10)
    {
        system("cls");
        printf("VOUS AVEZ PERDU !\n");
    }
    else
    {
        system("cls");
        printf("VOUS AVEZ TROUVE !\n");
    }
}
