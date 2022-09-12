#include <stdio.h>
#include <stdlib.h>

int main() {
    int f;
    int c;
    printf("entree la temperature en F : ");
    scanf("%d",&f);
    c=(f-32)* 5/9 ;
    printf("la temperature en C est : %d\n",c);
    if (c < 25){
        printf("il fait très froid");
    }
    if(c >=25 & c<30){
        printf("il fait froid");
    }
    if(c >=30 & c<=37){
        printf("il fait chaud");
    }
    if(c>37){
        printf("il fait très chaud");
    }
}
