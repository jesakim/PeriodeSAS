#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b=100,somme=0;
    for (int i=0;i<b;i++){
        int a;
        printf("entree un entier :");
        scanf("%d",&a);
        if(a==0)break;
        else if(a>100)continue;
        else somme=somme+a;
        b++;
    }
    printf("la somme est :%d\n",somme);
}
