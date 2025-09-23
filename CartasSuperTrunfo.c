#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado[50];
  char codigocarta [50];
  char nomecidade ,pontoturistico [50];
  int população 
  float pib , area;
  
  // Área para entrada de dados
  printf("Seja bem vindo ao jogo super trunfo \n");
  printf("Insira os dados das cartas abaixo \n");

  printf("Carta numero 1! \n");
  printf("Digite o estado: \n ");
  scanf("%s",estado);

  printf("Digite o codigo da carta: \n");
  scanf ("%s",codigocarta);

  printf("Digite o nome da cidade: \n");
  scanf ("%s",nomecidade);

  printf("Digite a população: \n");
  scanf ("%d",&população);

  printf("Digite o PIB: \n");
  scanf ("%f",&pib);

  printf("Digite a área: \n");
  scanf ("%f",&area);

  printf("Digite o ponto turístico: \n");
  scanf ("%s",&pontoturistico);

  printf("Carta numero 1! \n");
  printf("O Estado É: %s \n",estado);
  printf("O código da carta é: %s \n",codigocarta);
  printf("O nome da cidade é: %s \n",nomecidade);
  printf("A população é: %d \n",população);
  printf("O PIB é: %.2f \n",pib);
  printf("A área é: %.2f \n",area);
  printf("O ponto turístico é: %s \n",pontoturistico);
  
  // Área para exibição dos dados da cidade

return 0;
} 
