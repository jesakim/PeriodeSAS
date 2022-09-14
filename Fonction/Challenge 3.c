#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()

{
    bool isPremier(int a){
        int b=0;
    for (int i=2;i<a;i++){
        if(a%i==0)b++;
    }
    if(b==0)return true;
    else return false;
    }
}
