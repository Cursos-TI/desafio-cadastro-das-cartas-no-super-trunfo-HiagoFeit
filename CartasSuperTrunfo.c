#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "C"); // decimais com ponto

    // ===== Carta 1 =====
    char  estado1, codigo1[4], nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1; // PIB em bilhões de reais
    int   pontosTuristicos1;

    // ===== Carta 2 =====
    char  estado2, codigo2[4], nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int   pontosTuristicos2;

    // ---- Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado (A-H): "); fflush(stdout);
    scanf(" %c", &estado1);

    printf("Digite o Codigo da Carta (ex: A01): "); fflush(stdout);
    scanf("%3s", codigo1);

    printf("Digite o Nome da Cidade: "); fflush(stdout);
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a Populacao: "); fflush(stdout);
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km2): "); fflush(stdout);
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): "); fflush(stdout);
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: "); fflush(stdout);
    scanf("%d", &pontosTuristicos1);

    // ---- Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado (A-H): "); fflush(stdout);
    scanf(" %c", &estado2);

    printf("Digite o Codigo da Carta (ex: B02): "); fflush(stdout);
    scanf("%3s", codigo2);

    printf("Digite o Nome da Cidade: "); fflush(stdout);
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a Populacao: "); fflush(stdout);
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km2): "); fflush(stdout);
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): "); fflush(stdout);
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: "); fflush(stdout);
    scanf("%d", &pontosTuristicos2);

    // ---- Cálculos dos atributos derivados
    // Densidade = população / área
    float densidade1    = (float)populacao1 / area1;
    float densidade2    = (float)populacao2 / area2;

    // PIB per capita = (PIB (bilhões) * 1e9) / população
    float pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    // Super Poder:
    // soma dos atributos numéricos com densidade invertida (1/densidade).
    // Obs: 1/densidade = area / populacao (mesma coisa, mais estável).
    float invDens1 = area1 / (float)populacao1;
    float invDens2 = area2 / (float)populacao2;

    float superPoder1 =
        (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + invDens1;

    float superPoder2 =
        (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + invDens2;

    // ---- Exibição dos dados (opcionalmente, como nos níveis anteriores)
    printf("\n=== Dados Cadastrados ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ---- Comparações (1 = Carta 1 vence; 0 = Carta 2 vence)
    int cmpPop   = (populacao1 > populacao2);
    int cmpArea  = (area1 > area2);
    int cmpPIB   = (pib1 > pib2);
    int cmpPts   = (pontosTuristicos1 > pontosTuristicos2);
    int cmpDens  = (densidade1 < densidade2);      // menor vence
    int cmpCap   = (pibPerCapita1 > pibPerCapita2);
    int cmpSuper = (superPoder1 > superPoder2);

    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta %d venceu (%d)\n",        cmpPop   ? 1 : 2, cmpPop);
    printf("Area: Carta %d venceu (%d)\n",              cmpArea  ? 1 : 2, cmpArea);
    printf("PIB: Carta %d venceu (%d)\n",               cmpPIB   ? 1 : 2, cmpPIB);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", cmpPts   ? 1 : 2, cmpPts);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", cmpDens ? 1 : 2, cmpDens);
    printf("PIB per Capita: Carta %d venceu (%d)\n",    cmpCap   ? 1 : 2, cmpCap);
    printf("Super Poder: Carta %d venceu (%d)\n",       cmpSuper ? 1 : 2, cmpSuper);

    return 0;
}
