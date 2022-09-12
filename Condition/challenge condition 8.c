#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char c;
    printf("entre a character :");
    c = getchar();
    if (isalpha(c)==1){
        printf("uppercase alphabet-_-");
    }
    else if (isalpha(c)==2){
        printf("lowercase alphabet-_-");
    }
    else{
        printf("non-alphabetic character-_-");
    }
}
