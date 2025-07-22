#include <stdio.h>

int main() {

    int populacao1, populacao2;
    float Area1, Area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    char cidade1[50], cidade2[50];
    char estado1, estado2;
    char Cod_Carta1[50], Cod_Carta2[50];

    //Coleta de dados para a Carta 1

    printf("Digite as Informações da Carta 1\n");
    printf("Usando de A até H - Digite a Letra do Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Código do Estado (Ex A01, B02): ");
    scanf(" %s", Cod_Carta1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (Km): ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    //Coleta de dados para a Carta 2

    printf("Digite as Informações da Carta 2\n");
    printf("Usando de A até H - Digite a Letra do Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código do Estado (Ex A01, B02): ");
    scanf(" %s", Cod_Carta2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (Km): ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Exibição dos dados da Carta 1

    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", Cod_Carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f", Area1);
    printf(" km²\n");
    printf("PIB: %.2f\n", pib1);
    printf("\n");
   
    // Exibição dos dados da Carta 2

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", Cod_Carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f", Area2);
    printf(" km²\n");
    printf("PIB: %.2f\n", pib2);

    return 0;
}
