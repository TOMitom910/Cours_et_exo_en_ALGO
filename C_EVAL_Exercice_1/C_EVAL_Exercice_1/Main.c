#include <stdio.h>

int main()
{
    //declaration de variable
    int i = 0;
    int j = 1;
    char contenu;

    //crétion d'un fichier txt et ouverture en mode ecriture
    FILE* pFile;
    pFile = fopen("myfile.txt", "w");

    //si le fichier existe alors on le rempli de charactere
    if (pFile != NULL)
    {
        fputs("Ex his quidam aeternitati se commendari posse per statuas aestimantes eas ardenter adfectant quasi plus praemii de figmentis aereis sensu carentibus adepturi, quam ex conscientia honeste recteque factorum, easque auro curant inbracteari, quod Acilio Glabrioni delatum est primo, cum consiliis armisque regem superasset Antiochum. quam autem sit pulchrum exigua haec spernentem et minima ad ascensus verae gloriae tendere longos et arduos, ut memorat vates Ascraeus, Censorius Cato monstravit. qui interrogatus quam ob rem inter multos... statuam non haberet malo inquit ambigere bonos quam ob rem id non meruerim, quam quod est gravius cur inpetraverim mussitare.", pFile);
        fclose(pFile);//on ferme le fichier une fois qu'on a fini
    }
    //on le réouvre en mode lecture pour pouvoir recuperer les information stockés a l'interieur du fichier txt
    pFile = fopen("myfile.txt", "r");


    //affichage du premier chiffre de la premiere ligne
    printf("%d : ", j);

    //boucle permettant d'afficher dans la console le contenu du fichier txt
    do {
        //fgetc permet de recuperer un caratere du fichier et de le stocké dans la variable appellé contenu
        contenu = fgetc(pFile);
        i++;//i permet de compter le nombre de caractere par lignes
        if (i == 80 || contenu == "\n")//verification si i == 80
        {
            //si on rentre dans le if s'est qu'on a atteint 80 caractere ou qu'il y a un \n donc on fait un saut de ligne et on affiche le numero de la ligne d'après
            j++;
            printf("\n %d : ", j); 
            i = 0;// on remet i a 0 pour de pouvoir compter quand on est denouveau a 80
        }
        printf("%c", contenu);//affichage du contenu de la variable 
    } while (!feof(pFile));// on fait la boucle tant qu'on est pas a la fin du fichier
    //on ferme le fichier une fois qu'on a fini de la manipulé 
    fclose(pFile);

    return 0;
}
