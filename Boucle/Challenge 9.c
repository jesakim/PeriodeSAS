#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,exp,i=1,res;
    printf("entree un entier :");
    scanf("%d",&num);
    printf("entree l'exposant :");
    scanf("%d",&exp);
    res=num;
    if(exp==0)printf("1");
    else {
        while(i<exp){
        res=res*num;
        i++;
    }
    printf("la resultat est :%d",res);
    }


}
