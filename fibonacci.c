#include <stdio.h>

int main() {
    int n, i = 0;
    int a = 0, b = 1, temp;
    printf("Quantos termos da sequencia de Fibonacci voce deseja?\n");
    scanf("%d", &n);
    if (n <= 0){
        printf("Digite um número inteiro positivo.\n");
    }
    while (i < n) {
        if (i == 0) {
            printf("%d", a);
        } else if (i == 1) {
            printf(", %d", b);
        } else {
            temp = a + b;
            a = b;
            b = temp;
            printf(", %d", b);
        }
        i++;
    }
    printf("\n");
    return 0;
}