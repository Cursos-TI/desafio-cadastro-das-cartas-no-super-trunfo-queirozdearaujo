#include <stdio.h>

int main() {

    // Carta 1

     char estado[20];
     char codigo[5];
     char cidade[100];
     int populacao;
     float area;
     float pib;
     int turismo;

   
 printf("Carta 1: \n");
 printf("Estado: \n");
 scanf("%s", estado);
 printf("Código da Carta: \n");
 scanf("%s", codigo);
 printf("Cidade: \n");
 scanf(" %[^\n]", cidade);
 printf("População: \n");
 scanf("%d", &populacao);
 printf("Área total (em km²): \n");
 scanf("%f", &area);
 printf("PIB (em bilhões de reais): \n");
 scanf("%f", &pib);
 printf("Número de Pontos Turísticos: \n");
 scanf("%d", &turismo);

    // Cálculos
     float densidade = populacao / area;  
     float pibpc = (pib * 1000000000) / populacao;  

    printf("\n");

    // Imprimir resultados
 printf("Carta 1:\n");
 printf("Estado: %s\n", estado);
 printf("Código: %s\n", codigo);
 printf("Nome da Cidade: %s\n", cidade);
 printf("População: %d\n", populacao);
 printf("Área: %f km²\n", area);
 printf("PIB: %f bilhões de reais\n", pib);
 printf("Número de Pontos Turísticos: %d\n", turismo);
 printf("Densidade Populacional: %f hab/km²\n", densidade);
 printf("PIB per Capita: %f reais\n", pibpc);

    printf("\n");

    // Carta 2

     char estado2[20];
     char codigo2[5];
     char cidade2[100];
     int populacao2;
     float area2;
     float pib2;
     int turismo2;

    // Entrada de dados para Carta 2
    printf("Carta 2: \n");
    printf("Estado: \n");
    scanf("%s", estado2);
    printf("Código da Carta: \n");
    scanf("%s", codigo2);
    printf("Cidade: \n");
    scanf(" %[^\n]", cidade2);
    printf("População: \n");
    scanf("%d", &populacao2);
    printf("Área total (em km²): \n");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turismo2);

    // Cálculos
     float densidade2 = populacao2 / area2; 
     float pibpc2 = (pib2 * 1000000000) / populacao2;  

     printf("\n");

    // Imprimir resultados
   
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %f hab/km²\n", densidade2);
    printf("PIB per Capita: %f reais\n\n", pibpc2);

    //Imprimir com casas decimais para facilitar visualização
//1
 printf("Carta 1:\n");
 printf("Estado: %s\n", estado);
 printf("Código: %s\n", codigo);
 printf("Nome da Cidade: %s\n", cidade);
 printf("População: %d\n", populacao);
 printf("Área: %.2f km²\n", area);
 printf("PIB: %.2f bilhões de reais\n", pib);
 printf("Número de Pontos Turísticos: %d\n", turismo);
 printf("Densidade Populacional: %.2f hab/km²\n", densidade);
 printf("PIB per Capita: %.2f reais\n\n", pibpc);

//2
 printf("Carta 2:\n");
 printf("Estado: %s\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Nome da Cidade: %s\n", cidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Número de Pontos Turísticos: %d\n", turismo2);
 printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
 printf("PIB per Capita: %.2f reais\n", pibpc2);

// Fim desafio aventureiro
return 0;
}