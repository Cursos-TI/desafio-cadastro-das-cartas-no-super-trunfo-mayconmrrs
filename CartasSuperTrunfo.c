#include <stdio.h>

int main() {
    char Codigo[4], Cidade[50];
    char Estado;
    int  Populacao, N_Pontos_Turisticos;
    float Area, PIB;

    printf("Desafio Super Trunfo - Paises\n");
    printf("Cadastro de Cartas\n\n");
    
    printf("Digite a inicial do Estado, de (A-H):\n");
    scanf("%c", &Estado);

    printf("O Codigo da carta (01 a 04):\n");
    scanf("%s", &Codigo);

    printf("A Cidade:\n");
    scanf("%s", &Cidade);

    printf("A População:\n");
    scanf("%d", &Populacao);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &N_Pontos_Turisticos);

    printf("Digite a Area:\n");
    scanf("%f", &Area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Carta 1 cadastarada com sucesso!\n");

    printf("Estado: %c\n", Estado);

    printf("Codigo da carta é: %c%s\n", Estado, Codigo);

    printf("Cidade: %s\n", Cidade);

    printf("Populacao: %d\n", Populacao);

    printf("Pontos Turisticos: %d\n", N_Pontos_Turisticos);

    printf("Area: %f KM²\n", Area);

    printf("PIB: %f bilhoes de reais\n\n", PIB);

    printf("Cadastre uma nova Carta\n\n");

    printf(" Digite a inicial do Estado, de (A-H):\n");
    scanf(" %c", &Estado);

    printf("O Codigo da carta (01 a 04):\n");
    scanf("%s", &Codigo);

    printf("A Cidade:\n");
    scanf("%s", &Cidade);

    printf("A População:\n");
    scanf("%d", &Populacao);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &N_Pontos_Turisticos);

    printf("Digite a Area:\n");
    scanf("%f", &Area);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB);

    printf("Carta 2 cadastarada com sucesso!\n");

    printf("Estado: %c\n", Estado);

    printf("Codigo da carta é: %c%s\n", Estado, Codigo);

    printf("Cidade: %s\n", Cidade);

    printf("Populacao: %d\n", Populacao);

    printf("Pontos Turisticos: %d\n", N_Pontos_Turisticos);

    printf("Area: %f KM²\n", Area);

    printf("PIB: %f bilhoes de reais\n", PIB);

    



    
    return 0;
}
