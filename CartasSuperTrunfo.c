#include <stdio.h>

int main() {
    // declaração das variáveis
    char estado1; // estado é um char pois representa apenas uma letra
    char codigo1 [50], cidade1 [50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // coleta dos dados da primeira carta
    printf("Digite o estado da primeira carta (A - H): ");
    scanf("%c", &estado1);
    getchar(); // é necessário para evitar o erro do buffer do teclado

    printf("Digite o código da primeira carta (ex: A01 - H04): ");
    fgets(codigo1, 50, stdin); // é necessário usar o fgets para nomes completos

    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);

    printf("Digite a população desta cidade: ");
    scanf("%i", &populacao1);
    getchar(); // Limpa o buffer após ler um número inteiro

    printf("Digite a área desta cidade: ");
    scanf("%f", &area1); // o scanf não aceita especificadores de formato, o correto é %f e não %.2f
    getchar();

    printf("Digite o PIB desta cidade: ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o número de pontos turísticos: ");
    scanf("%i", &pontos_turisticos1);
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
    
    return 0;
}