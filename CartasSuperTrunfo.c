#include <stdio.h>

int main() {
    char estado1;
    char codigo1 [50], cidade1 [50];

    printf("Digite o estado da primeira carta (A - H): ");
    scanf("%c", &estado1);
    getchar();

    printf("Digite o código da primeira carta (ex: A01 - H04): ");
    fgets(codigo1, 50, stdin);

    printf("Digite o nome da cidade: ");
    fgets(cidade1, 50, stdin);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s", codigo1);
    printf("Nome da cidade: %s", cidade1);
    
    return 0;
}