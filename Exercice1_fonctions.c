#include <stdio.h>
#include <stdlib.h>


//Exercice 1.1 :

int val;
//prototype
void f1();

int main()      // exo 1.1
{
    f1();
    /*scanf("%d",&val);
    f2();
    f3(val);*/
    return 0;
}

void f1()
{
    printf("bonjour\n");
}









// Exercice 1.2 :

/*int n=5;

int main()      // exo 1.2
{
    void fct (int p) ;
    int n =3;
    fct(n);
}
void fct(int p)
{
    printf("%d %d",n ,p); // le programme suivant affiche les deux valeurs de n et p qui sont 3 et 5
}

//Exercice 1.3 :
 static int i=1;
 static int compt=0;
void f4()
{
    if (compt == i)
    {
        printf("appel %d fois\n",i);
        i = i*10;
    }else
      compt++;
}

int main()
{
    int x;
    do
    {
        f4();
        x++;
    }
    while(x < 1000000000);
}*/






