#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fibo(a){
    if(a==2 || a==1)return 1;
    else if(a==0)return 0;

    else return fibo(a-1)+fibo(a-2);
    }
    int num;
    printf("entree un entier :");
    scanf("%d",&num);
    printf("%d",fibo(num));
}
