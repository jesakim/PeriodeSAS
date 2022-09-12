#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char text1[50];
    char text2[50];
    int a;
    printf("entree txt : ");
    gets(text1);
    strcpy(text2,text1);
    a = strcmp(text1,strrev(text2));
    if(a == 0){
        printf("ce mot est un palindrome-_-");
    }
    else{
        printf("ce mot n'est pas un palindrome-_-");
    }





}
