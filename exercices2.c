#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 543 ;
    int p = 5 ;
    float x = 34.5678;
    printf ("A : %d %f\n", n , x);//543     34.567799
    printf ("B : %4d %10f\n", n , x);//543     34.567799
    printf ("C : %2d %3f\n", n , x);//543   34.567799
    printf ("D : %10.3f %10.3e\n", x , x);//34.568  3.457e+001
    printf ("E : %*d\n", p , n);//543
    printf ("F : %*.*f\n", 12 , 5 , x);//34.56780

    scanf( "%4d %2d",&n,&p);
    //a) n=12 p=45
    //b) n=1234 p=0
    //c) n=1234 p=7
    //d) n=1 p=45
    //e) n=4567 p=89

}
