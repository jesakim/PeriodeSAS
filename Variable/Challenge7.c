#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    printf("entree la valeur de A : ");
    scanf("%d",&a);
    printf("entree la valeur de B : ");
    scanf("%d",&b);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d - %d = %d\n",a,b,a-b);
    printf("%d / %d = %d\n",a,b,a/b);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d %% %d = %d\n",a,b,a%b);
}
