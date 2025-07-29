
#include <stdio.h>

int main()
{
  // --- VARIÁVEIS DA CARTA 1 ---
  char estado[20], codCarta[5], nomeCidade[20];
  int populacao, pontosTuristicos, numCarta;
  float area, pib;
  float densidadePop;
  float pipPerCapita;
  double superPower;

  // --- VARIÁVEIS DA CARTA 2 ---
  char estado2[20], codCarta2[5], nomeCidade2[20];
  int populacao2, pontosTuristicos2, numCarta2;
  float area2, pib2;
  float densidadePop2;
  float pipPerCapita2;
  double superPower2;

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
  // Cálculos básicos
  densidadePop = (float)populacao / area;
  pipPerCapita = pib / populacao;
  densidadePop2 = (float)populacao2 / area2;
  pipPerCapita2 = pib2 / populacao2;

  // --- SIMPLIFICADO: Cálculo do Super Poder (sem if) ---
  // Esta versão assume que a densidade nunca será zero.
  superPower = (double)populacao + area + pib + pontosTuristicos + pipPerCapita + (1.0 / densidadePop);
  superPower2 = (double)populacao2 + area2 + pib2 + pontosTuristicos2 + pipPerCapita2 + (1.0 / densidadePop2);

  // =======================================================
  // ETAPA 3: COMPARAR AS CARTAS
  // =======================================================
  // Esta parte continua igual, pois já gera 1 para vitória da Carta 1 e 0 para o contrário.
  int vitoriaPopulacao = populacao > populacao2;
  int vitoriaArea = area > area2;
  int vitoriaPib = pib > pib2;
  int vitoriaPontos = pontosTuristicos > pontosTuristicos2;
  int vitoriaDensidade = densidadePop < densidadePop2; // Menor densidade vence
  int vitoriaPibPerCapita = pipPerCapita > pipPerCapita2;
  int vitoriaSuperPoder = superPower > superPower2;

  // =======================================================
  // ETAPA 4: EXIBIR OS RESULTADOS DAS COMPARAÇÕES (VERSÃO BÁSICA)
  // =======================================================
  printf("\n\n================================\n");
  printf("--- RESULTADOS DA BATALHA ---\n");
  printf(" (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n");
  printf("================================\n");
  printf("População: %d\n", vitoriaPopulacao);
  printf("Área: %d\n", vitoriaArea);
  printf("PIB: %d\n", vitoriaPib);
  printf("Pontos Turísticos: %d\n", vitoriaPontos);
  printf("Densidade Populacional: %d\n", vitoriaDensidade);
  printf("PIB Per Capita: %d\n", vitoriaPibPerCapita);
  printf("SUPER PODER: %d\n", vitoriaSuperPoder);

  // =======================================================
  // ETAPA 5: IMPRIMIR OS DADOS COMPLETOS DAS CARTAS
  // =======================================================
  // (Esta parte foi mantida igual para conferência dos dados)
  printf("\n\n--- DADOS DA CARTA 1 ---\n");
  printf("Super Poder: %lf\n", superPower);
  printf("--- DADOS DA CARTA 2 ---\n");
  printf("Super Poder: %lf\n", superPower2);

  return 0;
}