#include <stdio.h>
#include <locale.h>

int main() {
    // Use ponto como separador decimal (ex.: 1521.11)
    setlocale(LC_ALL, "C");

    // ===== Carta 1 =====
    char  estado1;
    char  codigo1[4];
    char  nomeCidade1[50];
    int   populacao1;
    float area1;
    float pib1; // em bilhões de reais
    int   pontosTuristicos1;

    // Novos atributos (calculados)
    float densidade1;     // hab/km²
    float pibPerCapita1;  // reais por pessoa

    // ===== Carta 2 =====
    char  estado2;
    char  codigo2[4];
    char  nomeCidade2[50];
    int   populacao2;
    float area2;
    float pib2; // em bilhões de reais
    int   pontosTuristicos2;

    // Novos atributos (calculados)
    float densidade2;     // hab/km²
    float pibPerCapita2;  // reais por pessoa

    // --- Entrada Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o Estado (A-H): "); fflush(stdout);
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): "); fflush(stdout);
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade: "); fflush(stdout);
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: "); fflush(stdout);
    scanf("%d", &populacao1);

    printf("Digite a Area (em km2): "); fflush(stdout);
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): "); fflush(stdout);
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: "); fflush(stdout);
    scanf("%d", &pontosTuristicos1);

    // --- Cálculos Carta 1 ---
    // Assumindo entradas válidas (>0), pois não podemos usar if/else neste nível
    densidade1    = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1; // converte bilhões -> reais

    // --- Entrada Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o Estado (A-H): "); fflush(stdout);
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): "); fflush(stdout);
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: "); fflush(stdout);
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: "); fflush(stdout);
    scanf("%d", &populacao2);

    printf("Digite a Area (em km2): "); fflush(stdout);
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): "); fflush(stdout);
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: "); fflush(stdout);
    scanf("%d", &pontosTuristicos2);

    // --- Cálculos Carta 2 ---
    densidade2    = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // --- Saída ---
    printf("\n=== Dados Cadastrados ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
