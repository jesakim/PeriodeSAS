#include <stdio.h>
#include <stdlib.h>

int main()
{
    int echanger(int a,int b){
        printf("la 1ere valuer est :%d\nla 2eme valeur est :%d\n",a,b);
        int c;
        c=a;
        a=b;
        b=c;
        printf("la 1ere valuer apres echange est :%d\nla 2eme valeur apres echange est :%d\n",a,b);

    }
}
