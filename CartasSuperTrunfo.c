#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado1[100], codigocarta1[100] , nomecidade1[100] , pontoturistico1[100];
  char estado2[100] , codigocarta2[100] , nomecidade2[100] , pontoturistico2[100];
  int população1 , população2;
  double pib1 , area1 ,pib2 ,area2;

  // Área para entrada de dados
  printf("Seja bem vindo ao jogo super trunfo \n");
  printf("Insira os dados das cartas abaixo \n");

  printf("Dados carta 1! \n");
  printf("Digite o estado: \n ");
  scanf("%s", estado1);

  printf("Digite o codigo da carta: \n");
  scanf ("%s", codigocarta1);

  printf("Digite o nome da cidade: \n");
  scanf ("%s", nomecidade1);

  printf("Digite a população: \n");
  scanf ("%d", &população1);

  printf("Digite o PIB: \n");
  scanf ("%f", &pib1);

  printf("Digite a área: \n");
  scanf ("%f", &area1);

  printf("Digite o ponto turístico: \n");
  scanf ("%s", &pontoturistico1);

  printf("Dados da carta 2! \n");
  printf("Digite o estado: \n ");
  scanf("%s", estado1);

  printf("Digite o codigo da carta: \n");
  scanf ("%s", codigocarta2);

  printf("Digite o nome da cidade: \n");
  scanf ("%s", nomecidade2);

  printf("Digite a população: \n");
  scanf ("%d" ,&população2);

  printf("Digite o PIB: \n");
  scanf ("%f", &pib2);

  printf("Digite a área: \n");
  scanf ("%f", &area2);

  printf("Digite o ponto turístico: \n");
  scanf ("%s", &pontoturistico2);



 //Área para exibição dos dados da cidade;
  printf("carta 1 \n");
  printf("código da carta: %s\n", codigocarta1);
  printf("Estado: %s\n",estado1);
  printf("nome da cidade: %s\n", nomecidade1);
  printf("população: %d\n", população1);
  printf("PIB: %.2d\n", pib1);
  printf("Area: %.2d km\n", area1);
  printf("Ponto turístico: %s \2.n", pontoturistico1);
  
  printf("carta 2 \n");
  printf("código da carta: %s\n",codigocarta2);
  printf("Estado: %s\n",estado2);
  printf("nome da cidade: %s\n", nomecidade2);
  printf("população: %d\n", população2);
  printf("PIB: %.2d\n", pib2);
  printf("Area: %.2d km\n", area2);
  printf("Ponto turístico: %s\n", pontoturistico2);
  
  
 

return 0;
} 
