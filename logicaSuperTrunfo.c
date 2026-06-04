#include <string.h>
#include <stdio.h>

int main() {
int pontosturisticos, opcao1, opcao2;
int pontosturisticos2;
unsigned long int populacao;
unsigned long int populacao2;

char estado, codigo[5], nomedacidade[50];
char estado2, codigo2[5], nomedacidade2[50];
char atributo1[30];
char atributo2[30];

float area, pib;
float area2, pib2;

float densidadepopulacional, pibpercapita;
float densidadepopulacional2, pibpercapita2;

float valor1Carta1, valor1Carta2;
float valor2Carta1, valor2Carta2;
float somaCarta1, somaCarta2;

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

printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Populacional\n");

printf("Escolha uma opcao: ");
scanf("%d", &opcao1);

switch(opcao1)
{
    case 1:
        valor1Carta1 = populacao;
        valor1Carta2 = populacao2;
        strcpy(atributo1, "Populacao");
        break;
  
    case 2:
        valor1Carta1 = area;
        valor1Carta2 = area2;
        strcpy(atributo1, "Area");
        break;

    case 3:
        valor1Carta1 = pib;
        valor1Carta2 = pib2;
        strcpy(atributo1, "PIB");
        break;

    case 4:
        valor1Carta1 = pontosturisticos;
        valor1Carta2 = pontosturisticos2;
        strcpy(atributo1, "Pontos Turisticos");
        break;

    case 5:
        valor1Carta1 = densidadepopulacional;
        valor1Carta2 = densidadepopulacional2;
        strcpy(atributo1, "Densidade Populacional");
        break;

       default:
    printf("Opcao invalida!\n");
    return 0; 
}

printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Populacional\n");

printf("Escolha uma opcao: ");
scanf("%d", &opcao2);

if(opcao1 == opcao2)
{
    printf("Voce nao pode escolher o mesmo atributo duas vezes!\n");
    return 0;
}
switch(opcao2)
{
    case 1:
        valor2Carta1 = populacao;
        valor2Carta2 = populacao2;
        strcpy(atributo2, "Populacao");
        break;

    case 2:
        valor2Carta1 = area;
        valor2Carta2 = area2;
        strcpy(atributo2, "Area");
        break;

    case 3:
        valor2Carta1 = pib;
        valor2Carta2 = pib2;
        strcpy(atributo2, "PIB");
        break;

    case 4:
        valor2Carta1 = pontosturisticos;
        valor2Carta2 = pontosturisticos2;
        strcpy(atributo2, "Pontos Turisticos");
        break;

    case 5:
        valor2Carta1 = densidadepopulacional;
        valor2Carta2 = densidadepopulacional2;
        strcpy(atributo2, "Densidade Populacional");
        break;

      default:
    printf("Opcao invalida!\n");
    return 0;  
}

printf("\n%s\n", nomedacidade);
printf("%s: %.2f\n", atributo1, valor1Carta1);
printf("%s: %.2f\n", atributo2, valor2Carta1);

printf("\n%s\n", nomedacidade2);
printf("%s: %.2f\n", atributo1, valor1Carta2);
printf("%s: %.2f\n", atributo2, valor2Carta2);

somaCarta1 =
(opcao1 == 5 ? 1/densidadepopulacional : valor1Carta1)
+
(opcao2 == 5 ? 1/densidadepopulacional : valor2Carta1);

somaCarta2 =
(opcao1 == 5 ? 1/densidadepopulacional2 : valor1Carta2)
+
(opcao2 == 5 ? 1/densidadepopulacional2 : valor2Carta2);

printf("\nObs: Para Densidade Populacional, menor valor vence.\n");

printf("\n=== RESULTADO FINAL ===\n");

printf("Atributo 1: %s\n", atributo1);
printf("Atributo 2: %s\n\n", atributo2);

printf("\nSoma dos atributos:\n");
printf("%s: %.2f\n", nomedacidade, somaCarta1);
printf("%s: %.2f\n", nomedacidade2, somaCarta2);

char *vencedor =
    (somaCarta1 > somaCarta2) ? nomedacidade :
    (somaCarta2 > somaCarta1) ? nomedacidade2 :
    "Empate";

printf("\nResultado: %s\n", vencedor);

    return 0;
}
