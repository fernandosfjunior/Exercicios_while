#include <stdio.h>

int main() {
    int num, digito, pares = 0, impares = 0;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);
    if (num < 0) 
        num = -num;
    if (num == 0) {
        pares = 1;
    } else {
        while (num > 0) {
            digito = num % 10;
            if (digito % 2 == 0)
                pares++;
            else
                impares++;
            num = num / 10;
        }
    }
    printf("%d pares, %d impares\n", pares, impares);
    return 0;
}