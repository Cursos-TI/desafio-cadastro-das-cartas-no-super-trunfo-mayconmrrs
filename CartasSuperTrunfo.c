#include <stdio.h>

int main() {
    char Codigo[4], Cidade1[50], Cidade2[50]; //Definir Variavel do tipo caracteres
    char Estado1[2], Estado2[2];                //Definir Variaiavel do tipo caracteres
    unsigned long int  Populacao1, Populacao2, N_Pontos_Turisticos1, N_Pontos_Turisticos2, Resultado1, Resultado2;  //Definir Variavel do tipo inteiro
    float Densidade_Populacional1, PIB_per_Capita1, Densidade_Populacional2, PIB_per_Capita2; //Defini Variavel do tipo flutuante
    float Area1,Area2, PIB1, PIB2;
    float Super_Poder_carta_1, Super_Poder_carta_2;
                          
    printf("Desafio Super Trunfo - Paises\n\n");
    printf("Cadastre a primeira Carta\n");
    printf("**Obs: Nao utilize ponto ou virgula**\n");
    
    printf("Digite o Estado - (UF): "); // Solicitação de entrada de dados para o usuario
    scanf("%s", &Estado1); // captura dos dados de entrada pelo usuario

    printf("Codigo para a carta (01 a 04): ");
    scanf("%s", &Codigo);
    
    printf("Cidade: ");
    scanf("%s", &Cidade1);

    printf("População: ");
    scanf("%u", &Populacao1);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &N_Pontos_Turisticos1);

    printf("Digite a Area em KM²: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("\nCarta 1 cadastarada com sucesso!\n"); //Imprimindo dados cadastrados
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta é: %s%s\n", Estado1, Codigo);
    printf("Cidade: %s\n", Cidade1);
    printf("Populacao: %u\n", Populacao1);
    printf("Pontos Turisticos: %d\n", N_Pontos_Turisticos1);
    printf("Area em KM²: %.0f\n", Area1);
    printf("PIB em Bilhões: %.0f \n\n", PIB1);

    printf("Cadastre uma nova Carta!\n"); //Solicitando novos dados de entrada

    printf("Digite o Estado (UF): "); //inicio do novo cadastro
    scanf(" %s", &Estado2);  // Captura dos dados de entrada cadastrados pelo usuario

    printf("Codigo para carta (01 a 04): ");
    scanf("%s", &Codigo);

    printf("Cidade: ");
    scanf("%s", &Cidade2);

    printf("População: ");
    scanf("%u", &Populacao2);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &N_Pontos_Turisticos2);

    printf("Digite a Area em KM²: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("\nCarta 2 cadastarada com sucesso!\n"); //Imprimindo dados cadastrados
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta é: %s%s\n", Estado2, Codigo);
    printf("Cidade: %s\n", Cidade2);
    printf("Populacao: %u\n", Populacao2);
    printf("Pontos Turisticos: %d\n", N_Pontos_Turisticos2);
    printf("Area em KM²: %.0f\n", Area2);
    printf("PIB em Bilhões: %.0f \n\n", PIB2);

    //Calculando densidade populacional, renda percapta e super poder 
    Densidade_Populacional1 = (float)Populacao1 / Area1;
    printf("Dendidade populacional Carta 1: %.2f habitantes/km²\n", Densidade_Populacional1);

    PIB_per_Capita1 = PIB1 / (float)Populacao1;
    printf("Renda per capta é: R$%.2f\n\n", PIB_per_Capita1);

    Densidade_Populacional2 = (float)Populacao2 / Area2;
    printf("Dendidade populacional Carta 2: %.2f habitantes/km²\n", Densidade_Populacional2);

    PIB_per_Capita2 = PIB2 / (float)Populacao2;
    printf("Renda per capta é: R$%.2f\n\n", PIB_per_Capita2);

    Super_Poder_carta_1 = (PIB1 + (float)Populacao1 + Area1 + (float)N_Pontos_Turisticos1 + PIB_per_Capita1 + (1 / Densidade_Populacional1));
    printf("Super poder carta 1: %.0f\n", Super_Poder_carta_1);

    Super_Poder_carta_2 = (PIB2 + (float)Populacao2 + Area2 + (float)N_Pontos_Turisticos2 + PIB_per_Capita2 + (1 / Densidade_Populacional2));
    printf("Super poder carta 2 : %.0f\n\n", Super_Poder_carta_2);

    printf("Comparar cartas!\n");
    printf("Carta 1 vs Carta 2 (Populacão): %d\n", Populacao1 > Populacao2);
    printf("Carta 1 vs Carta 2 (Numeros de pontos turisticos): %d\n", N_Pontos_Turisticos1 > N_Pontos_Turisticos2);
    printf("Carta 1 vs Carta 2 (Area): %d\n", Area1 > Area2);
    printf("Carta 1 vs Carta 2 (PIB): %d\n", PIB1 > PIB2);
    printf("Carta 1 vs Carta 2 (Densidade Populacional): %d\n", Densidade_Populacional1 > Densidade_Populacional2);
    printf("Carta 1 vs Carta 2 (Per Capta): %d\n", PIB_per_Capita1 > PIB_per_Capita2);
    printf("Carta 1 vs Carta 2 (Super Poder): %d\n", Super_Poder_carta_1 > Super_Poder_carta_2);

    return 0;  
    

}