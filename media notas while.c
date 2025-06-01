#include <stdio.h>

int main() {
    float nota, soma = 0;
    int cont = 0;
    printf("Digite somente notas entre 0 e 10, outro valor encerra o programa:\n");
    while (1) {
        scanf("%f", &nota);
        if (nota < 0 || nota > 10) break;
        soma += nota;
        cont++;
    }
    if (cont > 0)
        printf("Media = %.2f\n", soma / cont);
    else
        printf("valor invalido.\n");

    return 0;
}