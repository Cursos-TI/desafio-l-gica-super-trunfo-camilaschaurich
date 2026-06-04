#include <stdio.h>

int main() {
int pontosturisticos, opcao;
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

printf("\n=== MENU DE COMPARACAO ===\n");
printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Pontos Turisticos\n");
printf("5 - Densidade Populacional\n");

printf("Escolha uma opcao: ");
scanf("%d", &opcao);

switch(opcao)
{
    case 1:
        printf("\nComparacao por Populacao\n");

        printf("%s: %lu habitantes\n", nomedacidade, populacao);
        printf("%s: %lu habitantes\n", nomedacidade2, populacao2);

        if (populacao > populacao2)
        {
            printf("Vencedor: %s\n", nomedacidade);
        }
        else if (populacao2 > populacao)
        {
            printf("Vencedor: %s\n", nomedacidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("\nComparacao por Area\n");
        
        printf("%s: %.2f km²\n", nomedacidade, area);
        printf("%s: %.2f km²\n", nomedacidade2, area2);

        if (area > area2)
        {
           printf("Vencedor: %s\n", nomedacidade);
        }
        else if (area2 > area)
        {
           printf("Vencedor: %s\n", nomedacidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
       
    case 3:
        printf("\nComparacao por PIB\n");
        
        printf("%s: %.2f\n", nomedacidade, pib);
        printf("%s: %.2f\n", nomedacidade2, pib2);
        
        if (pib > pib2)
        {
           printf("Vencedor: %s\n", nomedacidade);
        }
        else if (pib2 > pib)
        {
           printf("Vencedor: %s\n", nomedacidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
       
    case 4:
        printf("\nComparacao por Pontos Turisticos\n");
        
        printf("%s: %d pontos turisticos\n", nomedacidade, pontosturisticos);
        printf("%s: %d pontos turisticos\n", nomedacidade2, pontosturisticos2);

        if (pontosturisticos > pontosturisticos2)
        {
           printf("Vencedor: %s\n", nomedacidade);
        }
        else if (pontosturisticos2 > pontosturisticos)
        {
           printf("Vencedor: %s\n", nomedacidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;

    case 5:
        printf("\nComparacao por Densidade Populacional\n");
        
        printf("%s: %.2f hab/km²\n", nomedacidade, densidadepopulacional);
        printf("%s: %.2f hab/km²\n", nomedacidade2, densidadepopulacional2);

        if (densidadepopulacional < densidadepopulacional2)
        {
           printf("Vencedor: %s\n", nomedacidade);
        }
        else if (densidadepopulacional2 < densidadepopulacional)
        {
           printf("Vencedor: %s\n", nomedacidade2);
        }
        else
        {
            printf("Empate!\n");
        }
        break;
  
        default:
        printf("Opcao invalida!\n");
        break;

    }

return 0;
} 