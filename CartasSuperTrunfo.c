#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
 // Variáveis da carta um

    char estado1;
    char codigo1[4];         
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da carta dois

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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
    scanf("%d", &populacao1);
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

  // Área para exibição dos dados da cidade
// Exibição dos dados inseridos da carta um
    printf(" Dados Cadastrados carta 1 \n");

    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição dos dados inseridos das cartas

    printf(" Dados Cadastrados carta 2 \n");

    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

return 0;
} 
