#include <stdio.h>

int main() {
    int num, bin = 0, base = 1, resto;

    printf("Digite um numero decimal:\n");
    scanf("%d", &num);

    while (num > 0) {
        resto = num % 2;
        bin += resto * base;
        base *= 10;
        num /= 2;
    }

    printf("Binario = %d\n", bin);
    return 0;
}