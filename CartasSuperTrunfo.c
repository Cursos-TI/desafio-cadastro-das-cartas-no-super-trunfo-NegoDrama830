#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
//Declaração de variaveis
    int populacao1, populacao2, NPT1, NPT2;
    float area1, area2, PIB1, PIB2;
    char nome1[50], nome2[50];

//Dando ínicio ao sistema da 1° carta pedindo informaçãoes da cidade.
    printf("-----PRIMEIRA CARTA------ \n");
    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome1);

//Informe pela quantidade de pessoas de sua cidade
    printf("Quantas pessoas há na sua cidade?: \n");
    scanf("%d",&populacao1);

//Informe a área em km² da sua cidade
    printf("Digite a Área da sua cidade: \n");
    scanf("%f", &area1);

//Informe o PIB(Produto Interno Bruto da cidade)    
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f",&PIB1);

//Informe a quantidade de pontos turisticos da sua cidade
    printf("Há quantos pontos turisticos na sua cidade: \n");
    scanf("%d", &NPT1);
    printf("\n");

//Analisando e colocando as informações da 1° da carta descritas pelo úsuario na tela
    printf("Cidade: %s\n População: %d\n", nome1, populacao1);
    printf("Área: %f Km² \n  PIB: %f bilhões de reais \n", area1, PIB1);
    printf("Número de Pontos turisticos: %d\n", NPT1);
    printf("\n");
    printf("\n");

//Dando ínicio ao sistema da 2° carta pedindo informaçãoes da cidade.
    printf("-----SEGUNDA CARTA-----\n");
    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome2);

 //Informe pela quantidade de pessoas de sua cidade   
    printf("Quantas pessoas há na sua cidade?: \n");
    scanf("%d",&populacao2);

//Informe a área em km² da sua cidade
    printf("Digite a Área da sua cidade: \n");
    scanf("%f", &area2);

//Informe o PIB(Produto Interno Bruto da cidade)  
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f",&PIB2);

//Informe a quantidade de pontos turisticos da sua cidade
    printf("Há quantos pontos turisticos na sua cidade: \n");
    scanf("%d", &NPT2);
    printf("\n");

//Analisando e colocando as informações da 2° da carta descritas pelo úsuario na tela
    printf("Cidade: %s\n População: %d\n", nome2, populacao2);
    printf("Área: %f Km² \n  PIB: %f bilhões de reais \n ", area1, PIB2);
    printf("Número de Pontos turisticos: %d", NPT2);

//Encerrando programa Desafio Super Trunfo - Países
    return 0;
}
