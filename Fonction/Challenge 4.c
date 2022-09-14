#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPremier(int a){
        int b=0;
    for (int i=2;i<a;i++){
        if(a%i==0)b++;
    }
    if(b==0)return true;
    else return false;
}
int divededby(int n,int a){
        if(isPremier(n) && a!=0)printf("%d / %d = %d",n,a,n/a);
        else printf("vérifier que le numérateur est premier et le dénominateur non nul.");
    }
int main(){
}
