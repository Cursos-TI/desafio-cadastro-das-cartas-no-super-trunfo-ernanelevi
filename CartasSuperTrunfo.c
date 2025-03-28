#include <stdio.h>

int main() {
    // declaração das variáveis, carta 1 e carta 2
    char estado1, estado2; // estado é um char pois representa apenas uma letra
    char codigo1 [50], cidade1 [50], codigo2 [50], cidade2 [50];
    int populacao1, pontos_turisticos1, populacao2, pontos_turisticos2;
    float area1, pib1, area2, pib2;

    // coleta dos dados da primeira carta
    printf("Digite o estado da primeira carta (A - H): ");
    scanf("%c", &estado1);
    getchar(); // é necessário para evitar o erro do buffer do teclado

    printf("Digite o código da primeira carta (ex: A01 - H04): ");
    fgets(codigo1, 50, stdin); // é necessário usar o fgets para nomes completos

    printf("Digite o nome da cidade (carta 1): ");
    fgets(cidade1, 50, stdin);

    printf("Digite a população desta cidade (carta 1): ");
    scanf("%i", &populacao1);
    getchar(); // Limpa o buffer após ler um número inteiro

    printf("Digite a área desta cidade (carta 1): ");
    scanf("%f", &area1); // o scanf não aceita especificadores de formato, o correto é %f e não %.2f
    getchar();

    printf("Digite o PIB desta cidade (carta 1): ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o número de pontos turísticos (carta 1): ");
    scanf("%i", &pontos_turisticos1);
    getchar();

    // Coleta dos dados da Segunda Carta
    printf("Digite o estado da segunda carta (A - H): ");
    scanf("%c", &estado2);
    getchar();

    printf("Digite o código da segunda carta (A01 - H04): ");
    fgets(codigo2, 50, stdin);

    printf("Digite o nome da cidade (carta 2): ");
    fgets(cidade2, 50, stdin);

    printf("Digite a população desta cidade (carta 2): ");
    scanf("%i", &populacao2);
    getchar();

    printf("Digite a área desta cidade (carta 2): ");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB desta cidade (carta 2): ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o número de pontos turísticos (carta 2): ");
    scanf("%i", &pontos_turisticos2);
    getchar();

    // impressão da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s", codigo1); // o fgets já pula para a próxima linha, então não é necessário usar um \n
    printf("Nome da cidade: %s", cidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %.2f Km²\n", area1); // o %.2f tem que vir aqui
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos1);

    // impressão da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s", codigo2);
    printf("Nome da cidade: %s", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos2);
    
    return 0;
}