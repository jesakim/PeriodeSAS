#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x1;
    double y1;
    double x2;
    double y2;
    printf("entree la valeur de x1: ");
    scanf("%lf",&x1);
    printf("entree la valeur de y1: ");
    scanf("%lf",&y1);
    printf("entree la valeur de x2: ");
    scanf("%lf",&x2);
    printf("entree la valeur de y2: ");
    scanf("%lf",&y2);
    printf("la disance est : %lf", sqrt(pow(x2-x1,2)+pow(y2-y1,2)));

}
