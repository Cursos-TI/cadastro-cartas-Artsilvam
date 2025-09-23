#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  char estado[50];
  char codigocarta [50];
  char nomecidade [50];
  char pontoturistico [50];
  char carta1[50];
  char carta2[50];
  int população ;
  double pib , area;
  
  // Área para entrada de dados
  printf("Seja bem vindo ao jogo super trunfo \n");
  printf("Insira os dados das cartas abaixo \n");

  printf("Dados carta 1! \n");
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

  printf("Dados da carta 2! \n");
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



 //Área para exibição dos dados da cidade;
  printf("carta 1 \n");
  printf("código da carta: %s \n",codigocarta);
  printf("Estado: %s \n",estado);
  printf("nome da cidade: %s \n",nomecidade);
  printf("população: %d \n",população);
  printf("PIB: %.2f \n",pib);
  printf("Area: %.2f \n",area);
  printf("Ponto turístico: %s \n",pontoturistico);

  printf("carta 2 \n");
  printf("código da carta: %s \n",codigocarta);
  printf("Estado: %s \n",estado);
  printf("nome da cidade: %s \n",nomecidade);
  printf("população: %d \n",população);
  printf("PIB: %.2f \n",pib);
  printf("Area: %.2f \n",area);
  printf("Ponto turístico: %s \n",pontoturistico);
  
  
 

return 0;
} 
