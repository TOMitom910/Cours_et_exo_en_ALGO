#include <stdio.h>
#include <stdlib.h>

#define TAILLE 7

void init_Tab(int Tab[TAILLE][TAILLE]);
void crea_Tab(int Tab[TAILLE][TAILLE], int* pos_x, int* pos_y);
void affichage_Tab(int Tab[TAILLE][TAILLE]);
void deplacement_droite(int *pos_x);
void deplacement_bas(int *pos_y);
void deplacement_haut(int *pos_y);


int main()
{
    int Tab[TAILLE][TAILLE];
    int pos_x = (TAILLE / 2) - 1;
    int pos_y = TAILLE / 2;

    init_Tab(Tab);
    crea_Tab(Tab,&pos_x,&pos_y);
    affichage_Tab(Tab);
}

void init_Tab(int Tab[TAILLE][TAILLE]) {

    int i = 0;
    int j = 0;
    //init tableaux
    for (i = 0; i < TAILLE; i++) {
        for (j = 0; j < TAILLE; j++) {
            Tab[i][j] = 0;
        }
    }
}

void crea_Tab(int Tab[TAILLE][TAILLE], int *pos_x, int *pos_y) 
{

    int i = 0;
    int j = 0;
   
    for (i = 0; i < TAILLE * TAILLE; i++) 
    {
       // printf("\n");
        if (Tab[*pos_x][*pos_y] == 0)
        {

            Tab[*pos_x][*pos_y] = i + 1;

            (*pos_x)--;

            deplacement_droite(pos_x);

            (*pos_y)++;

           deplacement_bas(pos_y);

        }
        else 
        {
            i--;
            (*pos_x)--;

           deplacement_droite(pos_x);
     
            (*pos_y)--;

            deplacement_haut(pos_y);

        }
    }
}

void deplacement_droite(int *pos_x)
{
 
    if (*pos_x < 0) 
    {
        *pos_x = TAILLE - 1;
    }

}

void  deplacement_bas(int *pos_y)
{

    if (*pos_y > TAILLE - 1) 
    {
        *pos_y = 0;
    }

}

void  deplacement_haut (int *pos_y)
{
    if (*pos_y < 0)
    {
        *pos_y = TAILLE - 1;
    }

}

void affichage_Tab(int Tab[TAILLE][TAILLE])
{

    int i, j;

    for (i = 0; i < TAILLE; i++) {
        for (j = 0; j < TAILLE; j++) {
            printf(" %d -", Tab[i][j]);
        }
        printf("\n");
    }
}

