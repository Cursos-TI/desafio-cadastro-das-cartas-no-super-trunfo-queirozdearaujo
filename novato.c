#include <stdio.h>

int main (){
// Carta 1

   char estado[20];
   char codigo[5];
   char cidade[20];
   int populacao;
   float area;
   float pib;
   int turismo;

 printf ("Carta 1: \n");
printf ("Estado: \n");
 scanf ("%s", &estado);
printf ("Código da Carta: \n");
 scanf ("%s", &codigo);
printf ("Cidade: \n");
 scanf ("%s", &cidade);
printf ("População: \n");
 scanf ("%d", &populacao);
printf ("Área total: \n");
 scanf ("%f", &area);
printf ("PIB: \n");
 scanf ("%f", &pib);
printf ("Pontos Turisticos: \n");
 scanf ("%d", &turismo);

 printf ("\n \n");

 //Imprimir

 printf ("Carta 1: \n");
 printf ("Estado:             %s. \n", estado);
 printf ("Código da carta:    %s. \n", codigo);
 printf ("Cidade:             %s. \n", cidade);
 printf ("População:          %d. \n", populacao);
 printf ("Área total:         %f. km^2\n", area);
 printf ("PIB:                R$: %f bilhões de reais.\n", pib);
 printf ("Pontos Turístico1s: %d. \n", turismo);

 printf("\n \n");

//Carta 2

   char estado2 [20];
   char codigo2[5];
   char cidade2[20];
   int populacao2;
   float area2;
   float pib2;
   int turismo2;

 printf ("Carta 2: \n");
printf ("Estado: \n");
 scanf ("%s", &estado2);
printf ("Código da Carta: \n");
 scanf ("%s", &codigo2);
printf ("Cidade: \n");
 scanf ("%s", &cidade2);
printf ("População: \n");
 scanf ("%d", &populacao2);
printf ("Área total: \n");
 scanf ("%f", &area2);
printf ("PIB: \n");
 scanf ("%f", &pib2);
printf ("Pontos Turisticos: \n");
 scanf ("%d", &turismo2);

 printf ("\n \n");

 //Imprimir
 printf ("Carta 2: \n");
 printf ("Estado:             %s. \n", estado2);
 printf ("Código da carta:    %s. \n", codigo2);
 printf ("Cidade:             %s. \n", cidade2);
 printf ("População:          %d. \n", populacao2);
 printf ("Área total:         %f km^2.\n", area2);
 printf ("PIB:                R$: %f bilhões de reais. \n", pib2);
 printf ("Pontos Turístico1s: %d. \n",turismo2);

 //Imprimir ambas para facilitar visualização.
 printf ("\n \n \n");

 printf ("CARTA 1: \n");
 printf ("Estado:             %s. \n", estado);
 printf ("Código da carta:    %s. \n", codigo);
 printf ("Cidade:             %s. \n", cidade);
 printf ("População:          %d. \n", populacao);
 printf ("Área total:         %f km^2.\n", area);
 printf ("PIB:                R$: %f bilhões de reais. \n", pib);
 printf ("Pontos Turístico1s: %d. \n", turismo);

 printf ("\n \n");

 printf ("CARTA 2: \n");
 printf ("Estado:             %s. \n", estado2);
 printf ("Código da carta:    %s. \n", codigo2);
 printf ("Cidade:             %s.\n", cidade2);
 printf ("População:          %d. \n", populacao2);
 printf ("Área total:         %f km^2.\n", area2);
 printf ("PIB:                R$: %f bilhões de reais.\n", pib2);
 printf ("Pontos Turístico1s: %d.",turismo2);
 
 printf ("\n");

 //Fim do desafio novato.

return 0;
}
