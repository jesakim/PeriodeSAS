#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a=-15,b=-10,m,fa,fm;
    while(b-a>0.000001)
    {
       m=(b+a)/2;
       fa=a*a*a+12*a*a+1;
       fm=m*m*m+12*m*m+1;
       if(fa*fm<=0)b=m;
       else a=m;
    }
    printf("la solution de l'équation x3+12x2+1=0 dans l'intervalle [-15,-10] est :%.5f\n",a);
    return 0;
}
