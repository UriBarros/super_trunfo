
#include <stdio.h>

int main()
{
  char estado[20], codCarta[5], nomeCidade[20];
  int populacao, pontosTuristicos, numCarta;
  float area, pib;

  char estado2[20], codCarta2[5], nomeCidade2[20];
  int populacao2, pontosTuristicos2, numCarta2;
  float area2, pib2;

  printf("Numero da carta: ");
  scanf("%d", &numCarta);

  printf("Nome do estado: ");
  scanf(" %s", estado);

  printf("Codigo da carta: ");
  scanf(" %s", codCarta);

  printf("Nome da cidade: ");
  scanf(" %s", nomeCidade);

  printf("População: ");
  scanf("%d", &populacao);

  printf("Area em Km²: ");
  scanf("%f", &area);

  printf("PIB: ");
  scanf("%f", &pib);

  printf("Nº de pontos turísticos: ");
  scanf("%d", &pontosTuristicos);

  printf("-----------------");

  printf("Numero da carta: ");
  scanf("%d", &numCarta2);

  printf("Nome do estado: ");
  scanf(" %s", estado2);

  printf("Codigo da carta: ");
  scanf(" %s", codCarta2);

  printf("Nome da cidade: ");
  scanf(" %s", nomeCidade2);

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Area em Km²: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Nº de pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  printf("\n--- DADOS DA CARTA 1 ---\n");
  printf("Numero da carta: %d\n", numCarta);
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", codCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("População: %d habitantes\n", populacao);
  printf("Area: %.2f Km²\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Nº de pontos turísticos: %d\n", pontosTuristicos);

  printf("\n--- DADOS DA CARTA 2 ---\n");
  printf("Numero da carta: %d\n", numCarta2);
  printf("Estado: %s\n", estado2);
  printf("Codigo da carta: %s\n", codCarta2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Area: %.2f Km²\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Nº de pontos turísticos: %d\n", pontosTuristicos2);

  return 0;
}