int main()
{
    char name[100];
    char fname[100];
    char sexe[100];
    int age;
    int ntele;
    printf("entrée votre nom \n");
    scanf("%s", &name);
    printf("entrée votre prenom \n");
    scanf("%s", &fname);
    printf("entrée votre sexe \n");
    scanf("%s", &sexe);
    printf("entrée votre age \n");
    scanf("%d", &age);
    printf("entrée votre numero \n");
    scanf("%d", &ntele);
    printf("Bonjour,votre nom est : %s %s", name,fname);
    printf(",vous est %s agé de %d ans", sexe,age);
    printf(",votre numero est : %d",ntele);

}
