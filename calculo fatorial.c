#include <stdio.h>

int main() {
    int n; 
    int fatorial = 1; 
    int i;

    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Digite um numero inteiro positivo.\n");
        return 1;
    }
    i = n;
    while (i > 0) {
        fatorial *= i;
        i--;
    }
    printf("%d (%d!=", fatorial, n);
    i = n;
    while (i > 0) {
        printf("%d", i);
        i--;
        if (i > 0) printf("x");
    }

    printf(")\n");
    return 0;
}