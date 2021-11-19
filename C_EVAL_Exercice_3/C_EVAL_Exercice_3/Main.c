#include <stdio.h>
#include "information.h"

int main()
{
	//definition 
	information* mesInfo;

	mesInfo = malloc(sizeof(information));

	//appel de la fonction setInfo
	setInfo(mesInfo);
	free(mesInfo);
	return 0;
}