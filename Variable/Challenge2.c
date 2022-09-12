#include <stdio.h>
#include <stdlib.h>

int main() {
    int f;
    int c;
    printf("entree la temperature en F : ");
    scanf("%d",&f);
    c=(f-32)* 5/9 ;
    printf("la temperature en C est : %d",c);
    return 0;
}
