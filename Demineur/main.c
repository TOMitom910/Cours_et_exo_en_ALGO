#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <stdbool.h>

//definition de constante
#define Taille_Grille_X 9
#define Taille_Grille_Y 9
#define Nb_Mines 10

void init_Tab_Demineur(int tab_Demineur[Taille_Grille_X][Taille_Grille_Y], int tab_Choix[Taille_Grille_X][Taille_Grille_Y], int tab_Demineur2[Taille_Grille_X][Taille_Grille_Y]);
void init_Demineur(int tab_Demineur[Taille_Grille_X][Taille_Grille_Y], int tab_Choix[Taille_Grille_X][Taille_Grille_Y]);
void verif(int tab_Demineur[Taille_Grille_X][Taille_Grille_Y], int tab_Choix[Taille_Grille_X][Taille_Grille_Y], int tab_Demineur2[Taille_Grille_X][Taille_Grille_Y]);
int main()
{
    // structure
    struct Case_Grille
    {
        int contenu_case;
        bool verif;
    };
    //definition de tableau de structure
    struct Case_Grille tab_Demineur[Taille_Grille_X][Taille_Grille_Y];
    struct Case_Grille tab_Choix[Taille_Grille_X][Taille_Grille_Y];
    struct Case_Grille tab_Demineur2[Taille_Grille_X][Taille_Grille_Y];

    //appel des différentes fonctions
    init_Tab_Demineur(tab_Demineur,tab_Choix,tab_Demineur2);
    init_Demineur(tab_Demineur,tab_Choix);
    verif(tab_Demineur,tab_Choix,tab_Demineur2);

    return 0;
}

void init_Tab_Demineur(int tab_Demineur[Taille_Grille_X][Taille_Grille_Y], int tab_Choix[Taille_Grille_X][Taille_Grille_Y], int tab_Demineur2[Taille_Grille_X][Taille_Grille_Y])
{
    int i = 0;
    int j = 0;
    for(i=0;i<Taille_Grille_X;i++)
    {
        for(j=0;j<Taille_Grille_Y;j++)
        {
            tab_Demineur[i][j]=rand()%10;
            if(tab_Demineur[i][j] == 9)
            {
                tab_Choix[i][j]= "/";
                tab_Demineur[i][j]=-1;
                tab_Demineur2[i][j]=0;
            }
            else
            {
                tab_Choix[i][j]= "/";
                tab_Demineur[i][j]=0;
                tab_Demineur2[i][j]=0;
            }
        };
    };
};

void init_Demineur(int tab_Demineur[Taille_Grille_X][Taille_Grille_Y], int tab_Choix[Taille_Grille_X][Taille_Grille_Y])
{
    int i = 0;
    int j = 0;
    for (i=0;i<Taille_Grille_X;i++)
    {
        tab_Demineur[i][j-1]=0;
    }
    printf("     0   1   2   3   4   5   6   7   8   X\n");
    printf("   |---|---|---|---|---|---|---|---|---|\n");
    for(i=0;i<Taille_Grille_X;i++)
    {
        printf(" %d | ", i);

        for(j=0;j<Taille_Grille_Y;j++)
        {
           if(tab_Demineur[i][j]!=-1)
           {
                if(tab_Demineur[i-1][j-1]==-1){tab_Demineur[i][j]++;}
                if(tab_Demineur[i][j-1]==-1){tab_Demineur[i][j]++;}
                if(tab_Demineur[i+1][j-1]==-1){tab_Demineur[i][j]++;}

                if(tab_Demineur[i-1][j]==-1){tab_Demineur[i][j]++;}
                if(tab_Demineur[i+1][j]==-1){tab_Demineur[i][j]++;}

                if(tab_Demineur[i-1][j+1]==-1){tab_Demineur[i][j]++;}
                if(tab_Demineur[i][j+1]==-1){tab_Demineur[i][j]++;}
                if(tab_Demineur[i+1][j+1]==-1){tab_Demineur[i][j]++;}
           }

            printf("%s | ",tab_Choix[i][j]);
        }
        printf("\n");
         printf("   |---|---|---|---|---|---|---|---|---|\n");
    }
    printf(" Y\n");


}

void verif(int tab_Demineur[Taille_Grille_X][Taille_Grille_Y],int tab_Choix[Taille_Grille_X][Taille_Grille_Y], int tab_Demineur2[Taille_Grille_X][Taille_Grille_Y])
{
    int i = 0;
    int j = 0;
    int vie = 1;
    int stock_cord_X = -1;
    int stock_cord_Y = -1;

        printf("veuillez saisir les coordones Y : ");
        while (stock_cord_X>8||stock_cord_X<0)
        {
            scanf("%d",&stock_cord_X);
        };
        i--;
        printf("veuillez saisir les coordones X : ");
        while (stock_cord_Y>8|stock_cord_Y<0)
        {
            scanf("%d",&stock_cord_Y);
        };
        printf("     0   1   2   3   4   5   6   7   8   X\n");
        printf("   |---|---|---|---|---|---|---|---|---|\n");
        for(i=0;i<Taille_Grille_X;i++)
        {
            printf(" %d | ", i);
            for(j=0;j<Taille_Grille_Y;j++)
            {
                if(tab_Demineur[stock_cord_X][stock_cord_Y]!=-1)
                {
                    tab_Choix[stock_cord_X][stock_cord_Y]=tab_Demineur[stock_cord_X][stock_cord_Y];
                    tab_Demineur2[stock_cord_X][stock_cord_Y]=1;
                    if(tab_Demineur2[i][j]==1)
                    {
                            /*if(tab_Demineur[i-1][j-1]!=-1)
                            {
                                tab_Choix[stock_cord_X-1][stock_cord_Y-1]=tab_Demineur[stock_cord_X-1][stock_cord_Y-1];
                                printf("%d | ",tab_Choix[i-1][j-1]);
                            }
                            if(tab_Demineur[i][j-1]!=-1)
                            {
                                tab_Choix[stock_cord_X][stock_cord_Y-1]=tab_Demineur[stock_cord_X][stock_cord_Y-1];
                                printf("%d | ",tab_Choix[i][j-1]);
                            }
                            if(tab_Demineur[i+1][j-1]!=-1)
                            {
                                tab_Choix[stock_cord_X+1][stock_cord_Y-1]=tab_Demineur[stock_cord_X+1][stock_cord_Y-1];
                                printf("%d | ",tab_Choix[i+1][j-1]);
                            }


                            if(tab_Demineur[i-1][j]!=-1)
                            {
                                tab_Choix[stock_cord_X-1][stock_cord_Y]=tab_Demineur[stock_cord_X-1][stock_cord_Y];
                                printf("%d | ",tab_Choix[i-1][j]);
                            }
                            if(tab_Demineur[i+1][j]!=-1)
                            {
                                tab_Choix[stock_cord_X+1][stock_cord_Y]=tab_Demineur[stock_cord_X+1][stock_cord_Y];
                                printf("%d | ",tab_Choix[i+1][j]);
                            }


                            if(tab_Demineur[i-1][j+1]!=-1)
                            {
                                tab_Choix[stock_cord_X-1][stock_cord_Y+1]=tab_Demineur[stock_cord_X-1][stock_cord_Y+1];
                                printf("%d | ",tab_Choix[i-1][j+1]);
                            }
                            if(tab_Demineur[i][j+1]!=-1)
                            {
                                tab_Choix[stock_cord_X][stock_cord_Y+1]=tab_Demineur[stock_cord_X][stock_cord_Y+1];
                                printf("%d | ",tab_Choix[i][j+1]);
                            }
                            if(tab_Demineur[i+1][j+1]!=-1)
                            {
                                tab_Choix[stock_cord_X+1][stock_cord_Y+1]=tab_Demineur[stock_cord_X+1][stock_cord_Y+1];
                                printf("%d | ",tab_Choix[i+1][j+1]);
                            }*/
                       printf("%d | ",tab_Choix[i][j]);
                    }
                    else
                    {
                        printf("/ | ");
                    }
                }
                else
                {
                    tab_Choix[stock_cord_X][stock_cord_Y]=tab_Demineur[stock_cord_X][stock_cord_Y];
                    tab_Demineur2[stock_cord_X][stock_cord_Y]=1;
                    if(tab_Demineur2[i][j]==1)
                    {
                        vie=0;
                       printf("%d | ",tab_Choix[i][j]);
                    }
                    else
                    {
                        printf("/ | ");
                    }
                }
            }
            printf("\n");
            printf("   |---|---|---|---|---|---|---|---|---|\n");
        }
        printf(" Y\n");
        //system("cls");
        if(vie==1)
        {
            verif(tab_Demineur, tab_Choix, tab_Demineur2);
        }
        if(vie==0)
        {
            printf("Vous avez perdu");
        }
}
