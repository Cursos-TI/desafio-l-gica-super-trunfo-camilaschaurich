#include <stdio.h>

int main() {
int pontosturisticos;
int pontosturisticos2;
unsigned long int populacao;
unsigned long int populacao2;

char estado, codigo[5], nomedacidade[50];
char estado2, codigo2[5], nomedacidade2[50];

float area, pib;
float area2, pib2;

float densidadepopulacional, pibpercapita;
float densidadepopulacional2, pibpercapita2;


  printf("Digite o estado: \n");
  scanf(" %c", &estado);

  printf("Digite o código da cidade: \n");
  scanf(" %s", codigo);

  printf("Digite o número de habitantes da cidade: \n");
  scanf(" %lu", &populacao); 

  printf("Digite o número de pontos túristicos: \n");  
  scanf(" %d", &pontosturisticos);

  printf("Digite a área da cidade: \n");
  scanf(" %f", &area);

  printf("Digite o PIB da cidade: \n");
  scanf(" %f", &pib);
  
  printf("Digite o nome da cidade: \n");
  scanf("%s", nomedacidade);

  densidadepopulacional = populacao / area;
  pibpercapita = pib / populacao;
  
  printf("Digite o estado: \n");
  scanf(" %c", &estado2);

  printf("Digite o código da cidade: \n");
  scanf(" %s", codigo2);

  printf("Digite o número de habitantes da cidade: \n");
  scanf(" %lu", &populacao2); 

  printf("Digite o número de pontos túristicos: \n");  
  scanf(" %d", &pontosturisticos2);

  printf("Digite a área da cidade: \n");
  scanf(" %f", &area2);

  printf("Digite o PIB da cidade: \n");
  scanf(" %f", &pib2);
  
  printf("Digite o nome da cidade: \n");
  scanf("%s", nomedacidade2);

  densidadepopulacional2 = populacao2 / area2;
  pibpercapita2 = pib2 / populacao2;
  
printf("Estado: %c\n", estado);
printf("Código: %s\n", codigo);
printf("Nome da Cidade: %s\n", nomedacidade);
printf("População: %lu\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões de reais\n", pib);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos);
printf("Densidade populacional: %.2f hab/km2\n", densidadepopulacional);
printf("PIB per Capita: %.2f reais\n", pibpercapita);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomedacidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
printf("Densidade populacional: %.2f hab/km2\n", densidadepopulacional2);
printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    
printf("\n=== COMPARACAO DE CARTAS ===\n");
printf("\nAtributo escolhido: Populacao\n\n");

printf("Carta 1 - %s (%c): %lu habitantes\n",
nomedacidade, estado, populacao);

printf("Carta 2 - %s (%c): %lu habitantes\n",
nomedacidade2, estado2, populacao2);

// Comparação das cartas usando o atributo População
if (populacao > populacao2)
{
printf("\nResultado: Carta 1 (%s) venceu!\n",
nomedacidade);
}
else if (populacao2 > populacao)
{
printf("\nResultado: Carta 2 (%s) venceu!\n",
nomedacidade2);
}
else
{
printf("\nResultado: Empate!\n");
}

return 0;
} 