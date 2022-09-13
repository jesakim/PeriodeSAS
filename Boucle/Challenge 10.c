#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somme=0,i=1;
    while(i<=10){
        int a;
        printf("entree la %deme valeur :",i);
        scanf("%d",&a);
        if(a<0)continue;
        else{
            somme=somme+a;
            i++;
        }

    }
    printf("la somme est : %d",somme);
}
