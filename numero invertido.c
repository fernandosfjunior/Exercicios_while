#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char num[100];
    int i;
    printf("Digite um numero com pelo menos dois digitos:\n");
    scanf("%s", num);
    i = 0;
    while (num[i]) {
        if (!isdigit(num[i])) {
            printf("Entrada invalida. Use apenas digitos.\n");
            return 1;
        }
        i++;
    }
    printf("Invertido: ");
    i = strlen(num) - 1;
    while (i >= 0) {
        printf("%c", num[i]);
        i--;
    }
    printf("\n");
    return 0;
}