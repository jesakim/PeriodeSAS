int main()
{
    char name[100];
    char fname[100];
    char sexe[100];
    int age;
    int ntele;
    printf("entr�e votre nom \n");
    scanf("%s", &name);
    printf("entr�e votre prenom \n");
    scanf("%s", &fname);
    printf("entr�e votre sexe \n");
    scanf("%s", &sexe);
    printf("entr�e votre age \n");
    scanf("%d", &age);
    printf("entr�e votre numero \n");
    scanf("%d", &ntele);
    printf("Bonjour,votre nom est : %s %s", name,fname);
    printf(",vous est %s ag� de %d ans", sexe,age);
    printf(",votre numero est : %d",ntele);

}
