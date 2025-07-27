
#include <stdio.h>

int main()
{
  // --- VARIÁVEIS DA CARTA 1 ---
  char estado[20], codCarta[5], nomeCidade[20];
  int populacao, pontosTuristicos, numCarta;
  float area, pib;
  float densidadePop;
  float pipPerCapita;

  // --- VARIÁVEIS DA CARTA 2 ---
  char estado2[20], codCarta2[5], nomeCidade2[20];
  int populacao2, pontosTuristicos2, numCarta2;
  float area2, pib2;
  float densidadePop2;
  float pipPerCapita2;

  // =======================================================
  // ETAPA 1: LER TODOS OS DADOS DE ENTRADA
  // =======================================================
  printf("--- DADOS PARA A CARTA 1 ---\n");
  printf("Numero da carta: ");
  scanf("%d", &numCarta);

  printf("Nome do estado (sigla): ");
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

  printf("\n--- DADOS PARA A CARTA 2 ---\n");
  printf("Numero da carta: ");
  scanf("%d", &numCarta2);

  printf("Nome do estado (sigla): ");
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

  // =======================================================
  // ETAPA 2: FAZER OS CÁLCULOS
  // =======================================================
  densidadePop = (float)populacao / area;
  pipPerCapita = pib / populacao;

  densidadePop2 = (float)populacao2 / area2;
  pipPerCapita2 = pib2 / populacao2;

  // =======================================================
  // ETAPA 3: IMPRIMIR OS RESULTADOS
  // =======================================================
  printf("\n\n--- DADOS DA CARTA 1 ---\n");
  printf("Numero da carta: %d\n", numCarta);
  printf("Estado: %s\n", estado);
  printf("Codigo da carta: %s\n", codCarta);
  printf("Nome da cidade: %s\n", nomeCidade);
  printf("População: %d habitantes\n", populacao);
  printf("Area: %.2f Km²\n", area);
  printf("PIB: R$ %.2f\n", pib);
  printf("Nº de pontos turísticos: %d\n", pontosTuristicos);
  printf("Densidade populacional: %f\n", densidadePop);
  printf("Pip per capita: %f\n", pipPerCapita);

  printf("\n--- DADOS DA CARTA 2 ---\n");
  printf("Numero da carta: %d\n", numCarta2);
  printf("Estado: %s\n", estado2);
  printf("Codigo da carta: %s\n", codCarta2);
  printf("Nome da cidade: %s\n", nomeCidade2);
  printf("População: %d habitantes\n", populacao2);
  printf("Area: %.2f Km²\n", area2);
  printf("PIB: R$ %.2f\n", pib2);
  printf("Nº de pontos turísticos: %d\n", pontosTuristicos2);
  printf("Densidade populacional: %f\n", densidadePop2);
  printf("Pip per capita: %f\n", pipPerCapita2);

  return 0;
}