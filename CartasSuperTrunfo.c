#include <stdio.h>

int main (){
   char estado_c1[20];
   char codigo_c1[10];
   char cidade_c1[20];
   int populacao_c1;
   float area_em_km_c1;
   float pib_c1;
   int pontos_turisticos_c1;

   // Leitura dos dados da carta 1
   printf("Carta 1 \n");
   printf("Digite o estado: \n");
   scanf("%s", &estado_c1);

   printf("Digite o codigo: \n");
   scanf("%s", &codigo_c1);

   printf("Digite a cidade: \n");
   scanf("%s", &cidade_c1);

   printf("Digite a populacao: \n");
   scanf("%d", &populacao_c1);

   printf("Digite a area em km2: \n");
   scanf("%f", &area_em_km_c1);

   printf("Digite o PIB: \n");
   scanf("%f", &pib_c1);

   printf("Digite o numero de pontos turisticos: \n");
   scanf("%d", &pontos_turisticos_c1);

   char estado_c2[20];
   char codigo_c2[10];
   char cidade_c2[20];
   int populacao_c2;
   float area_em_km_c2;
   float pib_c2;
   int pontos_turisticos_c2;

   printf("\nCarta 2 \n");
   printf("Digite o estado: \n");
   scanf("%s", &estado_c2);

   printf("Digite o codigo: \n");
   scanf("%s", &codigo_c2);

   printf("Digite a cidade: \n");
   scanf("%s", &cidade_c2);

   printf("Digite a populacao: \n");
   scanf("%d", &populacao_c2);

   printf("Digite a area em km2: \n");
   scanf("%f", &area_em_km_c2);

   printf("Digite o PIB: \n");
   scanf("%f", &pib_c2);

   printf("Digite o numero de pontos turisticos: \n");
   scanf("%d", &pontos_turisticos_c2);


   printf("\nCARTA 1 \n");
   printf("ESTADO: %s\n", estado_c1);
   printf("CODIGO: %s\n", codigo_c1);
   printf("NOME DA CIDADE: %s\n", cidade_c1);
   printf("POPULACAO: %d\n", populacao_c1);
   printf("Area em km2: %f\n", area_em_km_c1);
   printf("PIB: %f\n", pib_c1);
   printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_c1);

   printf("\nCARTA 2 \n");
   printf("ESTADO: %s\n", estado_c2);
   printf("CODIGO: %s\n", codigo_c2);
   printf("NOME DA CIDADE: %s\n", cidade_c2);
   printf("POPULACAO: %d\n", populacao_c2);
   printf("Area em km2: %f\n", area_em_km_c2);
   printf("PIB: %f\n", pib_c2);
   printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_c2);

   return 0;

}