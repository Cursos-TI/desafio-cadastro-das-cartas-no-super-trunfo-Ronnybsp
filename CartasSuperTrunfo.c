#include <stdio.h>
#include <string.h>

int main() {

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;


    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;


    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade (sem espacos): ");
    scanf("%s", nomeCidade1);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    printf("\n");


    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade (sem espacos): ");
    scanf("%s", nomeCidade2);

    printf("Digite a Populacao: ");
    scanf("%lu", &populacao2); 

    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    printf("\n--- Cartas Cadastradas ---\n");


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // --- Exibição da Carta 2 ---
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    printf("\nComparacao de Cartas:\n");

    printf("Populacao: ");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("Area: ");
    if (area1 > area2) {
        printf("Carta 1 venceu\n");
    } else if (area2 > area1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("PIB: ");
    if (pib1 > pib2) {
        printf("Carta 1 venceu\n");
    } else if (pib2 > pib1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("Pontos Turisticos: ");
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Carta 1 venceu\n");
    } else if (pontosTuristicos2 > pontosTuristicos1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("Densidade Populacional (menor vence): ");
    if (densidade1 < densidade2) {
        printf("Carta 1 venceu\n");
    } else if (densidade2 < densidade1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("PIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 venceu\n");
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    printf("Super Poder: ");
    if (superPoder1 > superPoder2) {
        printf("Carta 1 venceu\n");
    } else if (superPoder2 > superPoder1) {
        printf("Carta 2 venceu\n");
    } else {
        printf("Empate\n");
    }

    return 0;
}

