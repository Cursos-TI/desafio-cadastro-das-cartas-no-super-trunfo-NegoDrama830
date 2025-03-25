#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main(){
//Declaração de variaveis
    int populacao1, populacao2;
    int NPT1, NPT2;
    float area1, area2, PIB1, PIB2;
    char nome1[50], nome2[50];
    float densidade1, densidade2, pibpercapita2, pibpercapita1;
    char estado1[4], estado2[4];
    float superPoder1, superPoder2;

//Dando ínicio ao sistema da 1° carta pedindo informaçãoes da cidade, estado e codigo.
    printf("-----PRIMEIRA CARTA------ \n");
    printf("Insira os dados da primeira carta:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome1);

//Informe pela quantidade de pessoas de sua cidade
    printf("Quantas pessoas há na sua cidade?: \n");
    scanf("%d",&populacao1);

//Informe a quantidade de pontos turisticos da sua cidade
printf("Há quantos pontos turisticos na sua cidade: \n");
scanf("%d", &NPT1);

//Informe a área em km² da sua cidade
    printf("Digite a Área da sua cidade: \n");
    scanf("%f", &area1);

//Informe o PIB(Produto Interno Bruto da cidade)    
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f",&PIB1);
    printf("\n");

//Calculando a densidade populacional e o PIB per capita da primeira carta
    densidade1 = populacao1 / area1;
    pibpercapita1 = (PIB1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + PIB1 + NPT1 + pibpercapita1 + (1.0 / densidade1);

//Analisando e colocando as informações da 1° da carta descritas pelo úsuario na tela junto aos resultados do calcúlo
    printf("CARTA 1\n");
    printf("ESTADO: %s\n",&estado1);
    printf("CODIGO: %s01\n", &estado1);
    printf("Cidade: %s\n População: %d\n", nome1, populacao1);
    printf("Área: %f Km² \n  PIB: %f bilhões de reais \n", area1, PIB1);
    printf("Número de Pontos turisticos: %d\n", NPT1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("\n");

//Dando ínicio ao sistema da 2° carta pedindo informaçãoes da cidade, estado e codigo.
    printf("-----SEGUNDA CARTA-----\n");
    printf("Insira os dados da segunda carta:\n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o nome da sua cidade: \n");
    scanf("%s", nome2);

 //Informe pela quantidade de pessoas de sua cidade   
    printf("Quantas pessoas há na sua cidade?: \n");
    scanf("%d",&populacao2);

    //Informe a quantidade de pontos turisticos da sua cidade
    printf("Há quantos pontos turisticos na sua cidade: \n");
    scanf("%d", &NPT2);

//Informe a área em km² da sua cidade
    printf("Digite a Área da sua cidade: \n");
    scanf("%f", &area2);

//Informe o PIB(Produto Interno Bruto da cidade)  
    printf("Digite o PIB da sua cidade: \n");
    scanf("%f",&PIB2);
    printf("\n");

//Calculando a densidade populacional e o PIB per capita da segunda carta
    densidade2 = populacao2 / area2;
    pibpercapita2 = (PIB2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + PIB2 + NPT2 + pibpercapita2 + (1.0 / densidade2);

//Analisando e colocando as informações da 2° da carta descritas pelo úsuario na tela junto aos resultados do calcúlo
    printf("CARTA 2\n");
    printf("ESTADO: %c\n", &estado2);
    printf("CODIGO: %c02\n", &estado2);
    printf("Cidade: %s\n População: %d\n", nome2, populacao2);
    printf("Área: %f Km² \n  PIB: %f bilhões de reais \n ", area2, PIB2);
    printf("Número de Pontos turisticos: %d\n", NPT2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);

     // Exibição dos resultados das comparações
     printf("\nComparacao de Cartas:\n");
     printf("Populacao: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
     printf("Area: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
     printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2);
     printf("Pontos Turisticos: Carta %d venceu (%d)\n", NPT1 > NPT2 ? 1 : 2, NPT1 > NPT2);
     printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
     printf("PIB per Capita: Carta %d venceu (%d)\n", pibpercapita1 > pibpercapita2 ? 1 : 2, pibpercapita1 > pibpercapita2);
     printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);
//Encerrando programa Desafio Super Trunfo - Países
    return 0;
}
