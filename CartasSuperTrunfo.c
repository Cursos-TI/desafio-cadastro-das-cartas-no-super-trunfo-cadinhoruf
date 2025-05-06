#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
   // Carta 1
   char estado[15], codigo_carta[5], cidade[15];
   int populacao, pontos_turisticos;
   float area, pib;

   printf("Digite o estado: \n");
   scanf("%s", estado);

   printf("Digite o código da carta: \n");
   scanf("%s", codigo_carta);

   printf("Digite o nome da cidade: \n");
   scanf("%s", cidade);

   printf("Digite a população: \n");
   scanf("%d", &populacao);

   printf("Digite a área da cidade(km): \n");
   scanf("%f", &area);

   printf("Digite o PIB: \n");
   scanf("%f", &pib);

   printf("Digite o nº de pontos turísticos: \n");
   scanf("%d", &pontos_turisticos);

   printf("\n");
   printf("-----------------------");
   printf("\n");

   printf("Carta: 1 \n");
   printf("Estado: %s \n", estado);

   printf("Código: %s \n", codigo_carta);

   printf("Nome da Cidade: %s \n", cidade);

   printf("População: %d \n", populacao);

   printf("Área: %.2f km² \n", area);

   printf("PIB: %.2f bilhões de reais \n", pib);

   printf("Número de pontos turísticos: %d", pontos_turisticos);

   printf("\n");
   printf("-----------------------");
   printf("\n");

   // Carta 2
   char estado2[15], codigo_carta2[5], cidade2[15];
   int populacao2, pontos_turisticos2;
   float area2, pib2;

   printf("Digite o estado: \n");
   scanf("%s", estado2);

   printf("Digite o código da carta: \n");
   scanf("%s", codigo_carta2);

   printf("Digite o nome da cidade: \n");
   scanf("%s", cidade2);

   printf("Digite a população: \n");
   scanf("%d", &populacao2);

   printf("Digite a área da cidade(km): \n");
   scanf("%f", &area2);

   printf("Digite o PIB: \n");
   scanf("%f ", &pib2);

   printf("Digite o nº de pontos turísticos: \n");
   scanf("%d", &pontos_turisticos2);

   printf("\n");
   printf("-----------------------");
   printf("\n");

   printf("Carta: 2 \n");
   printf("Estado: %s \n", estado2);

   printf("Código: %s \n", codigo_carta2);

   printf("Nome da Cidade: %s \n", cidade2);

   printf("População: %d \n", &populacao2);

   printf("Área: %.2f km² \n", area2);

   printf("PIB: %.2f bilhões de reais \n", pib2);

   printf("Número de pontos turísticos: %d", &pontos_turisticos2);

   return 0;
}
