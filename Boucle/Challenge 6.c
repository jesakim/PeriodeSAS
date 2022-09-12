#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("entree un entier :");
    scanf("%d",&a);
    printf("les nombre premier entre 2 et %d sont :",a);
    for(int i=2;i<=a;i++){
        int b=0;
        for (int j=2;j<i;j++){
                if(i%j==0)b++;
    }
    if(b==0)printf("%d ",i);
    }
}
