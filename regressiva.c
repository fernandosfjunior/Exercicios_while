#include <stdio.h>

int main() {
    int numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    if (numero >= 0) {
        while (numero >= 0) {
            printf("%d\n", numero);
            numero--;
        }
    } else {
        printf("Por favor, digite um número inteiro positivo.\n");
    }
    return 0;
}