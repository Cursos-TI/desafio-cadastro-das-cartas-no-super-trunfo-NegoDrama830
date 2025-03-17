#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Felipe

int main(){
    int populacao1, populacao2, NPT1, NPT2;
    float area1, area2, PIB1, PIB2;
    char nome1[50], nome2[50];

    printf("-----PRIMEIRA CARTA------ \n");
    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome1);

    printf("Quantas pessoas há na sua cidade?: \n");
    scanf("%d",&populacao1);

    printf("Digite a Área da sua cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f",&PIB1);

    printf("Há quantos pontos turisticos na sua cidade: \n");
    scanf("%d", &NPT1);

    printf("Cidade: %s\n População: %d\n", nome1, populacao1);
    printf("Área: %f\n PIB: %f\n", area1, PIB1);
    printf("Número de Pontos turisticos: %d\n", NPT1);

    printf("-----SEGUNDA CARTA-----\n");
    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome2);

    printf("Quantas pessoas há na sua cidade?: \n");
    scanf("%d",&populacao2);

    printf("Digite a Área da sua cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f",&PIB2);

    printf("Há quantos pontos turisticos na sua cidade: \n");
    scanf("%d", &NPT2);

    printf("Cidade: %s\n População: %d\n", nome2, populacao2);
    printf("Área: %f\n PIB: %f\n", area1, PIB2);
    printf("Número de Pontos turisticos: %d", NPT2);

    return 0;
}
