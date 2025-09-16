#include <stdio.h>

main(){

 // Área para definição das variáveis para armazenar as propriedades das cidades
 // Variáveis da carta um

    char estado1;
    char codigo1[4];         
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float dendidade_populacional1;
    float PIB_percapita1;
    float superpoder1;

    // Variáveis da carta dois

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float dendidade_populacional2;
    float PIB_percapita2;
    float superpoder2;

  // Área para entrada de dados
 // Entrada de dados da carta um

    printf("Cadastro da Carta 1: \n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta (Ex: A01): \n");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);   // Lê string com espaços
    printf("Digite a População: \n");
    scanf("%lu", &populacao1);
    printf("Digite a Área (em km²):  \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);
    
    // Entrada de dados da carta dois

    printf("Cadastro da Carta 2: \n");

    printf("Digite o Estado (A-H):  \n");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta (Ex: B02):  \n");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade:  \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: \n");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais):  \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);
    
   

// Area de calculos

    dendidade_populacional1 = (float)populacao1/area1;
    PIB_percapita1= (float)(pib1*1e9)/populacao1;
    dendidade_populacional2 = (float)populacao2/area2;
    PIB_percapita2 = (float)(pib2*1e9)/populacao2;
    superpoder1=(float)populacao1+area1+pib1+pontosTuristicos1+PIB_percapita1+(1.0f/dendidade_populacional1);
    superpoder2=(float)populacao2+area2+pib2+pontosTuristicos2+PIB_percapita2+(1.0f/dendidade_populacional2);

  // Área para comparaçoes

    printf("comparaçao de cartas  \n");
    printf("Populaçao:carta 1 venceu (%d)\n", populacao1>populacao2);
    printf("Area:carta 1 venceu (%d)\n", area1>area2);
    printf("PIB:carta 1 venceu (%d)\n", pib1>pib2);
    printf("Pontos Turisticos:carta 1 venceu (%d)\n", pontosTuristicos1>pontosTuristicos2);
    printf("Densidade populacional:carta 1 venceu (%d)\n", dendidade_populacional1<dendidade_populacional2);
    printf("PIB per capita:carta 1 venceu (%d)\n", PIB_percapita1>PIB_percapita2);
    printf("Super Poder:carta 1 venceu (%d)\n", superpoder1>superpoder2);


    return 0;
} 