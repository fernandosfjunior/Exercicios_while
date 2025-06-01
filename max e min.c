#include <stdio.h>

int main() {
    int num, max, min, primeiro = 1;

    printf("Digite numeros inteiros positivos, 0 finaliza o programa:\n");

    while (1) {
        scanf("%d", &num);
        if (num == 0) break;

        if (num < 0) {
            printf("Numero invalido. Digite apenas numeros positivos.\n");
            continue;
        }

        if (primeiro) {
            max = min = num;
            primeiro = 0;
        } else {
            if (num > max) max = num;
            if (num < min) min = num;
        }
    }

    if (primeiro)
        printf("Nenhum numero valido foi digitado.\n");
    else
        printf("Maximo = %d, Minimo = %d\n", max, min);

    return 0;
}
