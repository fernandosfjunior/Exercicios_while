#include <stdio.h>

int main() {
    int num, i = 1, soma = 0, primeiro = 1;
    
    printf("Digite um numero:\n");
    scanf("%d", &num);
    printf("%d ", num);
    printf("%s(",(num == 1)?"nao perfeito":"");
    while (i < num) {
        if (num % i == 0) {
            soma += i;
            if (!primeiro) printf("+");
            printf("%d", i);
            primeiro = 0;
        }
        i++;
    }
    printf("=%d)\n", soma);

    if (soma == num && num != 1)
        printf("=> %d e perfeito\n", num);
    else
        printf("=> %d nao e perfeito\n", num);
    return 0;
}