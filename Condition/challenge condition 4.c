#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("entree la 1�re valeur : ");
    scanf("%d",&a);
    printf("entree la 2�re valeur : ");
    scanf("%d",&b);
    if (a==b){
        printf("%d",(a+b)*3);
    }
    else {
        printf("%d",a+b);
    }
}
