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

    //Comparação 
    printf("\nComparação das cartas (Atribuição: PIB):\n");
    printf("%s (PIB: %2f.)\n",  cidade1, pib1);
    printf("%s (PIB: %2f.)\n",  cidade2, pib2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");  
    }
    
    return 0;
}