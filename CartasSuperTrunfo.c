#include <stdio.h>
#include <locale.h>

int main(){
    char nomeEstado1, codigoCarta1, nomeCidade1[10]; 
    char nomeEstado2, codigoCarta2, nomeCidade2[10];
    int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    float area1, area2, pib1, pib2;

    setlocale(LC_ALL,"portuguese");

    printf("\n digite o nome do estado 1, sendo uma letra de A a H: ");
    scanf("%s",&nomeEstado1);
    printf("\n digite o codigo da carta 1, sendo a letra anterior e um número de 1 a 4: ");
    scanf("%s",&codigoCarta1);
    printf("\n digite o nome da cidade 1: ");
    scanf("%s", &nomeCidade1);
    printf("\n digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("\n digite o numero de pontos turisticos da cidade 1: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n digite a area em km² da cidade 1: ");
    scanf("%f", &area1);
    printf("\n digite o pib da cidade 1: ");
    scanf("%f", &pib1);

    printf("\n\n digite o nome do estado 2, sendo uma letra de A a H: ");
    scanf("%s",&nomeEstado2);
    printf("\n digite o codigo da carta 2, sendo a letra anterior e um número de 1 a 4: ");
    scanf("%s",&codigoCarta2);
    printf("\n digite o nome da cidade 2: ");
    scanf("%s", &nomeCidade2);
    printf("\n digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("\n digite o numero de pontos turisticos da cidade 2: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n digite a area em km² da cidade 2: ");
    scanf("%f", &area2);
    printf("\n digite o pib da cidade 2: ");
    scanf("%f", &pib2);

    

    printf("carta1:");
    printf("\n estado: %s", nomeEstado1);
    printf("\n codigo: %s", codigoCarta1);
    printf("\n nome da cidade: %s", nomeCidade1);
    printf("\n População: %d", populacao1);
    printf("\n Área: %f", area1);
    printf("\n Pib: %2.f bilhões de reais", pib1);
    printf("\n Número de Pontos Turísticos: %d", pontosTuristicos1);

    printf("carta2: ");
    printf("\n estado: %s", nomeEstado2);
    printf("\n codigo: %s", codigoCarta2);
    printf("\n nome da cidade: %s", nomeCidade2);
    printf("\n População: %d", populacao2);
    printf("\n Área: %f", area2);
    printf("\n Pib: %2.f bilhões de reais", pib2);
    printf("\n Número de Pontos Turísticos: %d", pontosTuristicos2);



  
return 0;

}
