#include <stdio.h>

int main() {
    // declaração das variáveis
    char estado1; // estado é um char pois representa apenas uma letra
    char codigo1 [50], cidade1 [50];

    // coleta dos dados da primeira carta
    printf("Digite o estado da primeira carta (A - H): ");
    scanf("%c", &estado1);
    getchar(); // é necessário para evitar o erro do buffer do teclado

    printf("Digite o código da primeira carta (ex: A01 - H04): ");
    fgets(codigo1, 50, stdin); // é necessário usar o fgets para nomes completos

    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);

    // impressão da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s", codigo1); // o fgets já pula para próxima linha, então não é necessário usar um \n
    printf("Nome da cidade: %s", cidade1);
    
    return 0;
}