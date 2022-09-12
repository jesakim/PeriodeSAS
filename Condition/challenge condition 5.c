#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double a;
    double b;
    double c;
    double delta;
    printf("l`equation est sous forme AX²+BX+C :\n");
    printf("entree la valeur de A :");
    scanf("%lf",&a);
    printf("entree la valeur de B :");
    scanf("%lf",&b);
    printf("entree la valeur de C :");
    scanf("%lf",&c);
    delta = (b*b)-(4*a*c);
    printf(" delta egual : %.2lf\n",delta);
    if (delta == 0){
        printf("la solution de l'equation est : %.2lf",-b/(2*a));
    }
    else if (delta > 0){
        printf("les solutions de l'equation sont : %.2lf et %.2lf",(-b+sqrt(delta))/(2*a),(-(b+sqrt(delta)))/(2*a));
    }
    else {
        printf("L'équation admet deux solutions COMPLEXES '_'");
    }
}
