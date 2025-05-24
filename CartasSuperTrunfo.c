#include <stdio.h>

int main() {

//Declarar variáveis carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

//Declarar variáveis carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

//Variáveis de comparação
    int resultado_populacao;
    int resultado_area;
    int resultado_pib;
    int resultado_pontos_turisticos;
    int resultado_densidade_populacional;
    int resultado_pib_per_capita;
    int resultado_super_poder;

//Ler dados carta 1
    printf("-----Digite os dados da carta 1-----\n");

    printf("Estado de A até H: \n");
    scanf(" %c", &estado1);

    printf("Código da carta (EX: D01): \n");
    scanf("%s", &codigo1);

    printf("Cidade da carta 1: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%li", &populacao1);

    printf("Área total: \n");
    scanf("%f", &area1);
    
    printf("PiB total: \n");
    scanf("%f", &pib1);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (float) pib1 / populacao1;
    super_poder1 = (float) populacao1 + area1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;

    printf("\n");

//Ler dados da carta 2
    printf("-----Digite os dados da carta 2-----\n");

    printf("Estado de A até H: \n");
    scanf(" %c", &estado2);

    printf("Código da carta (EX: D02): \n");
    scanf("%s", &codigo2);

    printf("Cidade da carta 2: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%li", &populacao2);

    printf("Área total: \n");
    scanf("%f", &area2);
    
    printf("PiB total: \n");
    scanf("%f", &pib2);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (float) pib2 / populacao2;
    super_poder2 = (float) populacao2 + area2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;

    printf("\n");

//Mostrar dados da carta 1 
printf("-------Dados carta 1-------\n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %li\n", populacao1);
    printf("Área em km²: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita : R$ %.2f\n", pib_per_capita1);
    printf("Super poder: %f\n", super_poder1);

    printf("\n");

//Mostrar dados carta 2
    printf("-------Dados carta 2-------\n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %li\n", populacao2);
    printf("Área em km²: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super poder: %f\n", super_poder2);

    printf("\n");

// Comparar dados das cartas
    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
    resultado_pib_per_capita = pib_per_capita1 > pib_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;


// Exibir comparação
   printf("-----Comparação das cartas, se resultado for 1, carta 1 venceu, se for 0, carta 2 venceu-----\n");

   printf("População: %d\n", resultado_populacao);
   printf("Àrea: %d\n", resultado_area);
   printf("Pib: %d\n", resultado_pib);
   printf("Pontos túristicos: %d\n", resultado_pontos_turisticos);
   printf("Densidade populacional: %d\n", resultado_densidade_populacional);
   printf("PIB per Capita: %d\n", resultado_pib_per_capita);
   printf("Super poder: %d\n", resultado_super_poder);



    return 0;
}
