#include <stdio.h>

int main() {
    char estado_c1[20], codigo_c1[10], cidade_c1[20];
    unsigned long int populacao_c1;
    float area_em_km2_c1, pib_c1, densidade_c1, pib_per_capita_c1;
    int pontos_turisticos_c1;
    float super_poder_c1;

    char estado_c2[20], codigo_c2[10], cidade_c2[20];
    unsigned long int populacao_c2;
    float area_em_km2_c2, pib_c2, densidade_c2, pib_per_capita_c2;
    int pontos_turisticos_c2;
    float super_poder_c2;

    // ===== Entrada de dados =====
    printf("Carta 1 \n");
    printf("Digite o estado: ");
    scanf("%s", estado_c1);
    printf("Digite o codigo: ");
    scanf("%s", codigo_c1);
    printf("Digite a cidade: ");
    scanf("%s", cidade_c1);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao_c1);
    printf("Digite a area em km2: ");
    scanf("%f", &area_em_km2_c1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_c1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_c1);

    densidade_c1 = (float)populacao_c1 / area_em_km2_c1;
    pib_per_capita_c1 = pib_c1 / (float)populacao_c1;
    super_poder_c1 = (float)populacao_c1 + area_em_km2_c1 + pib_c1 + 
                     pontos_turisticos_c1 + pib_per_capita_c1 + (1.0f / densidade_c1);

    printf("\nCarta 2 \n");
    printf("Digite o estado: ");
    scanf("%s", estado_c2);
    printf("Digite o codigo: ");
    scanf("%s", codigo_c2);
    printf("Digite a cidade: ");
    scanf("%s", cidade_c2);
    printf("Digite a populacao: ");
    scanf("%lu", &populacao_c2);
    printf("Digite a area em km2: ");
    scanf("%f", &area_em_km2_c2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_c2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_c2);

    densidade_c2 = (float)populacao_c2 / area_em_km2_c2;
    pib_per_capita_c2 = pib_c2 / (float)populacao_c2;
    super_poder_c2 = (float)populacao_c2 + area_em_km2_c2 + pib_c2 + 
                     pontos_turisticos_c2 + pib_per_capita_c2 + (1.0f / densidade_c2);

    // ===== Comparação =====
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", (populacao_c1 > populacao_c2));
    printf("Area: Carta 1 venceu (%d)\n", (area_em_km2_c1 > area_em_km2_c2));
    printf("PIB: Carta 1 venceu (%d)\n", (pib_c1 > pib_c2));
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (pontos_turisticos_c1 > pontos_turisticos_c2));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (densidade_c1 < densidade_c2)); // menor densidade vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (pib_per_capita_c1 > pib_per_capita_c2));
    printf("Super Poder: Carta 1 venceu (%d)\n", (super_poder_c1 > super_poder_c2));

    // ===== Exibição opcional das cartas =====
    printf("\nCARTA 1 - %s (%s):\n", cidade_c1, estado_c1);
    printf("Populacao: %lu | Area: %.2f | PIB: %.2f | Pontos: %d\n", 
            populacao_c1, area_em_km2_c1, pib_c1, pontos_turisticos_c1);
    printf("Densidade: %.2f | PIB per Capita: %.2f | Super Poder: %.2f\n", 
            densidade_c1, pib_per_capita_c1, super_poder_c1);

    printf("\nCARTA 2 - %s (%s):\n", cidade_c2, estado_c2);
    printf("Populacao: %lu | Area: %.2f | PIB: %.2f | Pontos: %d\n", 
            populacao_c2, area_em_km2_c2, pib_c2, pontos_turisticos_c2);
    printf("Densidade: %.2f | PIB per Capita: %.2f | Super Poder: %.2f\n", 
            densidade_c2, pib_per_capita_c2, super_poder_c2);

    return 0;
}
