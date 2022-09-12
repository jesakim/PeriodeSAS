#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("entree un entier :");
    scanf("%d",&a);
    for(int i=0;i<=a;i=i+2){
       for(int j=0;j<=(a-i)/2;j++)printf(" ");
       for(int b=0;b<=i;b++)printf("*");
       printf("\n");
    }
}
