#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n;
    srand(time(NULL));
    n = (rand()%7)+1;
    if (n==1){
        printf("c'est lundi -_-");
    }
    else if (n==2){
        printf("c'est mardi -_-");
    }
    else if (n==3){
        printf("c'est mercredi -_-");
    }
    else if (n==4){
        printf("c'est jeudi -_-");
    }
    else if (n==5){
        printf("c'est vendredi -_-");
    }
    else if (n==6){
        printf("c'est samedi -_-");
    }
    else if (n==7){
        printf("c'est dimanche -_-");
    }
}
