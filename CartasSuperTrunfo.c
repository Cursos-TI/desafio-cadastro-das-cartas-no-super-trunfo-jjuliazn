#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[3];
    char codigo1[10];
    char cidade1[50];
    unsigned long int populacao1;
    int pontosturisticos1;
    float area1;
    float pib1;
    float densidadepopulacional1;
    float pibperCapita1;
    float superPoder1;

    // Declaração das variáveis para a Carta 2
    char estado2[3];
    char codigo2[10];
    char cidade2[50];
    unsigned long int populacao2;
    int pontosturisticos2;
    float area2;
    float pib2;
    float densidadepopulacional2;
    float pibperCapita2;
    float superPoder2;

    // Entrada de dados para a Carta 1
    printf("Digite o estado da Carta 1 (A-H):\n");
    scanf("%2s", estado1);

    printf("Digite o codigo da carta 1 (Ex: A01):\n");
    scanf("%9s", codigo1);

    printf("Nome da sua cidade da Carta 1:\n");
    scanf(" %[^\n]s", cidade1);

    printf("Digite a populacao da Carta 1:\n");
    scanf("%lu", &populacao1);

    printf("Digite a quantidade de pontos turisticos da Carta 1:\n");
    scanf("%d", &pontosturisticos1);

    printf("Digite a area da Carta 1:\n");
    scanf("%f", &area1);

    printf("Digite o pib da Carta 1:\n");
    scanf("%f", &pib1);

    // Entrada de dados para a Carta 2
    printf("\nDigite o estado da Carta 2 (A-H):\n");
    scanf("%2s", estado2);

    printf("Digite o codigo da carta 2 (Ex: A01):\n");
    scanf("%9s", codigo2);

    printf("Nome da sua cidade da Carta 2:\n");
    scanf(" %[^\n]s", cidade2);

    printf("Digite a populacao da Carta 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite a quantidade de pontos turisticos da Carta 2:\n");
    scanf("%d", &pontosturisticos2);

    printf("Digite a area da Carta 2:\n");
    scanf("%f", &area2);

    printf("Digite o pib da Carta 2:\n");
    scanf("%f", &pib2);

    // Cálculo da densidade populacional e PIB per capita para Carta 1
    densidadepopulacional1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1;

    // Cálculo da densidade populacional e PIB per capita para Carta 2
    densidadepopulacional2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;

    // Cálculo do Super Poder para Carta 1
    // Atenção à conversão de tipos para float
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + pibperCapita1 + (1.0f / densidadepopulacional1);

    // Cálculo do Super Poder para Carta 2
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + pibperCapita2 + (1.0f / densidadepopulacional2);

    // Exibição dos dados das cartas (opcional, para conferência)
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nPontos Turisticos: %d\nArea: %.2f\nPIB: %.2f\nDensidade Populacional: %.2f\nPIB per Capita: %.6f\nSuper Poder: %.6f\n",
           estado1, codigo1, cidade1, populacao1, pontosturisticos1, area1, pib1, densidadepopulacional1, pibperCapita1, superPoder1);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %lu\nPontos Turisticos: %d\nArea: %.2f\nPIB: %.2f\nDensidade Populacional: %.2f\nPIB per Capita: %.6f\nSuper Poder: %.6f\n",
           estado2, codigo2, cidade2, populacao2, pontosturisticos2, area2, pib2, densidadepopulacional2, pibperCapita2, superPoder2);

    // Comparações
    printf("\nComparacao de Cartas:\n");

    // População: maior vence
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2 ? 1 : 0);

    // Área: maior vence
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2 ? 1 : 0);

    // PIB: maior vence
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2 ? 1 : 0);

    // Pontos Turísticos: maior vence
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosturisticos1 > pontosturisticos2 ? 1 : 0);

    // Densidade Populacional: menor vence
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadepopulacional1 < densidadepopulacional2 ? 1 : 0);

    // PIB per Capita: maior vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibperCapita1 > pibperCapita2 ? 1 : 0);

    // Super Poder: maior vence
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 0);

    return 0;

    
}
