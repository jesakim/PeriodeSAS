#include <stdio.h>
#include <stdlib.h>

int main()
{
   int A;
   char text[20];
   printf("entre votre integer : ");
   scanf("%d",&A);
   sprintf(text, "%d", A);
   printf("votre nombre en ordre inverse est : %c%c%c", text[2],text[1],text[0]);

}
