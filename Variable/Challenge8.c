#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("entree la valeur de A :");
    scanf("%d",&a);
    printf("entree la valeur de B :");
    scanf("%d",&b);
    printf("entree la valeur de C :");
    scanf("%d",&c);
    printf("entree la valeur de D :");
    scanf("%d",&d);
    float somme=a+b+c+d;
    printf("la moyen entre %d , %d , %d et %d est :%.2f",a,b,c,d,somme/4);
}
