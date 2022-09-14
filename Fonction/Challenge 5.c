#include <stdio.h>
#include <stdlib.h>

void triFusion(int i, int j, int tab[], int tmp[]) {
    if(j <= i)return;

    int m =(i + j)/2;

    triFusion(i,m,tab,tmp);
    triFusion(m +1,j,tab,tmp);

    int pg=i;
    int pd=m+1;
    int c;
    for(c=i;c<=j;c++) {
        if(pg==m+1){
            tmp[c]=tab[pd];
            pd++;
        }else if (pd==j+1) {
            tmp[c]=tab[pg];
            pg++;
        }else if (tab[pg]<tab[pd]) {
            tmp[c]=tab[pg];
            pg++;
        }else {
            tmp[c]=tab[pd];
            pd++;
        }
    }

    for(c=i;c<=j;c++){
        tab[c]=tmp[c];
    }
}


int main(){
  int nbr,i,tab[100],tmp[100];

  printf("Entrez le nombre d'éléments dans le tableau:");
  scanf("%d",&nbr);

  printf("Entrez %d entiers :",nbr);

  for (i=0;i<nbr;i++)
    scanf("%d",&tab[i]);
    printf("votre tableau non trier est :");
    for (i=0;i<nbr;i++)printf("%d ",tab[i]);
    triFusion(0,nbr-1,tab,tmp);

    printf("\nvotre tableau trier est :");
    for(i=0;i<nbr;i++)  {
        printf("%d ",tab[i]);
  }
  return 0;
}

