#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0;
    printf("entree un entier :");
    scanf("%d",&a);
    for (int i=2;i<a;i++){
        if(a%i==0)b++;
    }
    if(b==0)printf("ce nombre est premier -_-");
    else printf("ce nombre n'est pas premier -_-");
}
