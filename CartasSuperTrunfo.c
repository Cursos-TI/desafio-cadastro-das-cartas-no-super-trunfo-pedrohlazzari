#include <stdio.h>

int main(){
    char estado1[50];
    char estado2[50];
    char codigoest1[20];
    char codigoest2[20];
    char cidade1[50];
    char cidade2[50];
    int populacao1;
    int populacao2;
    float area1;
    float area2; 
    float pib1;
    float pib2;
    int pt1;
    int pt2;
    float dp1, dp2;
    float pp1, pp2;

    printf("Carta 01\n");
    printf("Estado: \n");
    scanf("%s", estado1);

    printf("Código da carta: \n");
    scanf("%s", codigoest1);

    printf("Nome da cidade: \n");
    scanf("%s", cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área em km²: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &pt1);

    dp1 = populacao1 / area1;

    pp1 = pib1 / populacao1;

    printf("=-=-=-=-=-=-==-=-=-=-=-\n");
    printf("Carta 01\n");
    printf("Estado: %s\n", estado1);
    printf("Código da carta: %s\n", codigoest1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área em km²: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos túristicos: %d\n", pt1);
    printf("Densidade: %.2f\n", dp1);
    printf("PIB per capita: %.2f\n", pp1);

    printf("=-=-=-=-=-=-==-=-=-=-=-\n");
    printf("Carta 02\n");
    printf("Estado: \n");
    scanf("%s", estado2);

    printf("Código da carta: \n");
    scanf("%s", codigoest2);

    printf("Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área em km²: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &pt2);

    dp2 = populacao2 / area2;

    pp2 = pib2 / populacao2;

    printf("=-=-=-=-=-=-==-=-=-=-=-\n");
    printf("Carta 02\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigoest2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área em km²: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos túristicos: %d\n", pt2);
    printf("Densidade: %.2f\n", dp2);
    printf("PIB per capita: %.2f\n", pp2);

}
