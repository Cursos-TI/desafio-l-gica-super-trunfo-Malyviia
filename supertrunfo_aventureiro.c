#include <stdio.h>

int main() {

    // Variáveis da Carta 1
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, desidade_populacional1, pib_per_capital1;
    
    // Variáveis da Carta 2
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, desidade_populacional2, pib_per_capital2;
    
    int opcao;
     
    // Cadastro da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %2s", estado1);
    printf("Código da cidade: ");
    scanf(" %3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1); 
    
    // Cadastro da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %2s", estado2);
    printf("Código da cidade: ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //calculo 
    desidade_populacional1 = pontosTuristicos1/area1;
    pib_per_capital1 = pib1/populacao1;

    desidade_populacional2 = pontosTuristicos2/area2;
    pib_per_capital2 = pib2/populacao2;

    // Exibir os dados
    printf("\nDados da Carta 1:\n");
    printf("Cidade: %s | População: %d | Área: %.2f | PIB: %.2f | Desidade: %.2f | PIB pe capital: %.2f\n");
        cidade1, populacao1, &area1, pib1, desidade_populacional1, pib_per_capital1;

    printf("\nDados da Carta 2:\n");
    printf("Cidade: %s | População: %d | Área: %.2f | PIB: %.2f | Desidade: %.2f | PIB pe capital: %.2f\n");
        cidade2, populacao2, area2, pib2, desidade_populacional2, pib_per_capital2;

    // Menu de comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Populacional (MENOR vence)\n");
    printf("5 - PIB per capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);


    // Comparação baseada na escolha
    switch (opcao) {

       case 1:
          printf("\nComparando População:\n");
          if (populacao1 > populacao2)
             printf("Vencedor: %s \n", cidade1);
          else if (populacao1 < populacao2)
             printf("Vencedor: %s\n", cidade2);
          else
             printf("Empate em população!\n");
          break;
    
       case 2:
          printf("\nComparando Área:\n");
          if (area1 > area2)
             printf("Vencedor: %s\n", cidade1);
          else if (area1 < area2)
             printf("Vencedor: %s\n", cidade2);
          else
             printf("Empate em Área!\n"); 
          break;

        case 3:
          printf("\nComparando PIB:\n");
          if (pib1 > pib2)
             printf("Vencedor: %s\n", cidade1);
          else if (pib1 < pib2)
             printf("Vencedor: %s\n", cidade2);
          else
             printf("Empate em PIB!\n");
          break;

        case 4:
          printf("\nComparando Desidade Populacional:\n");
          if (desidade_populacional1 > desidade_populacional2)
             printf("Vencedor: %s\n", cidade1);
          else if (desidade_populacional1 < desidade_populacional2)
             printf("Vencedor: %s\n", cidade2);
          else
             printf("Empate em Desidade Populacional!\n");
          break;

        case 5:
          printf("\nComparando PIB per Capital:\n");
          if (pib_per_capital1 > pib_per_capital2)
             printf("Vencedor: %s\n", cidade1);
          else if (pib_per_capital1 < pib_per_capital2)
             printf("Vencedor: %s\n", cidade2);
          else
             printf("Empate em PIB per Capital!\n");
          break;

        default:
             printf("Opção inválida!\n");

    }
    
    return 0;
} 