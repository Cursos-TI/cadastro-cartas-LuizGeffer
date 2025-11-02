#include <stdio.h>
 
int main() {
  char Estado;
  char Codico_Da_Carta[20];
  char Nome_Da_Cidade[100];
  int Populacao;
  float Area;
  float PIB;
  int Numero_Pontos_Turistico;
//Carta02
  char Estado2;
  char Codico_Da_Carta2[20];
  char Nome_Da_Cidade2[100];
  int Populacao2;
  float Area2;
  float PIB2;
  int Numero_Pontos_Turistico2;

  printf("Digite os dados da carta 01 \n");
  printf("Qual é o Estado:");
  scanf("%s",&Estado);


  printf(" Qual é o código da carta:");
  scanf("%s",&Codico_Da_Carta);

    printf("\n Qual é o nome da Cidade:");
  scanf("%s",&Nome_Da_Cidade);

  printf("\n Qual é a quantidade da População");
  scanf("%d",&Populacao);

  printf("\n Qual é a Área:");
  scanf("%f",&Area);

  printf("\n Qual é o PIB:");
  scanf("%f",&PIB);

  printf("\n Qual é o número de pontos turisticos:");
  scanf("%d",&Numero_Pontos_Turistico);


  //Carta02

  printf("Digite os dados da carta 02 \n");
  printf("Qual é o Estado:");
  scanf("%s",&Estado2);


  printf(" Qual é o código da carta:");
  scanf("%s",&Codico_Da_Carta2);

    printf("\n Qual é o nome da Cidade:");
  scanf("%s",&Nome_Da_Cidade2);

  printf("\n Qual é a quantidade da População");
  scanf("%d",&Populacao2);

  printf("\n Qual é a Área:");
  scanf("%f",&Area2);

  printf("\n Qual é o PIB:");
  scanf("%f",&PIB2);

  printf("\n Qual é o número de pontos turisticos:");
  scanf("%d",&Numero_Pontos_Turistico2);

   //Dados das cartas;
   printf("\nDados da Carta 01");

   printf("\nEstado: %c", Estado);
   printf("\nCódigo: %s",Codico_Da_Carta);
   printf("\nNome da Cidade: %s ",Nome_Da_Cidade);
   printf("\nPopulação: %d", Populacao);
   printf("\nÁrea: %f",Area);
   printf("\nPIB: %f",PIB);
   printf("\nNúmero de Pontos Turisticos: %d",&Numero_Pontos_Turistico);

      //Dados das cartas 02;
   printf("\nDados da Carta 02");

   printf("\nEstado: %c", Estado2);
   printf("\nCódigo: %s",Codico_Da_Carta2);
   printf("\nNome da Cidade: %s ",Nome_Da_Cidade2);
   printf("\nPopulação: %d", Populacao2);
   printf("\nÁrea: %f",Area2);
   printf("\nPIB: %f",PIB2);
   printf("\nNúmero de Pontos Turisticos: %d",Numero_Pontos_Turistico2);

  }