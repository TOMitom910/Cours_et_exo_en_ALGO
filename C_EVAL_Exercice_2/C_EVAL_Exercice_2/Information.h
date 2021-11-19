//structure stockant les information utilisateurs
typedef struct information
{
	
	char* nom[20];//variable pour stocker le nom
	char* prenom[15];//variable pour stocker le prenom
	int n_age;//variable pour stocker l'age
	char* telephone[11];//variable pour stocker le numero de telephone
	//int n_id;//variable pour stocker l'id
}information;

//defintion defonction externe
extern void setInfo(information* mesInfo);
