#include "information.h"
#include <stdio.h>

// fonction qui demande et affiche dans le fichier les information renseigné par l'utilisateur 
void setInfo(information* mesInfo)
{
	char continuer[3];
	mesInfo = malloc(sizeof(information));

	//declaration et création de fichier externe
	FILE* pFile;
	pFile = fopen("répertoire.txt", "a");

	/*mesInfo->n_id = 1;
	fputs("\nUtilisateur ", pFile);//fputs qui permet d'envoyer les information voulu au fichier txt
	fprintf(pFile, "%d\n", mesInfo->n_id);
	//fputs(&mesInfo->n_id, pFile);*/

	//pritnf pour demander le nom a l'utilisateur 
	printf("Veuillez saisir un nom (maximum 20 caracteres) : ");
	scanf("%s", mesInfo->nom);//scanf pour stocker le nom dans la variable nom de la structure information


	fputs("\nVotre nom est : ", pFile);
	fputs(mesInfo->nom, pFile);//fputs pour ecrire le nom dans le fichier

	//printf pour demander le prenom a l'utilisateur 
	printf("Veuillez saisir un prenom(maximum 15 caracteres) :");
	scanf("%s", mesInfo->prenom);//scanf pour stocker le prenom dans la variable prenom de la structure information

	fputs("\nVotre prenom est : ", pFile);
	fputs(mesInfo->prenom, pFile);

	//printf pour demander l'age a l'utilisateur 
	printf("Veuillez saisir un age :");
	scanf("%d", &mesInfo->n_age);//scanf pour stocker l' age dans la variable n_age de la structure information
	fputs("\nvous avez ", pFile);
	fprintf(pFile, "%d", mesInfo->n_age);
	fputs(" ans\n", pFile);

	//printf pour demander le numero de telephone a l'utilisateur 
	printf("Veuillez saisir un numero de telephone(maximum 11 caracteres) :");
	scanf("%s", mesInfo->telephone);//scanf pour stocker le numero de telephone dans la variable telephone de la structures information

	fputs("Votre numéro de téléphone est : ", pFile);
	fputs(mesInfo->telephone, pFile);

	fclose(pFile);
	free(mesInfo);
}