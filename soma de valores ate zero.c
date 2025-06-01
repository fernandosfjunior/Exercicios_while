#include<stdio.h>

int main(){
    int numero;
    int soma = 0;
    printf("digite um numero inteiro(0 encerra a soma):\n");
    while(1){
        scanf("%d", &numero);
        if(numero == 0){
        break;
    }
    soma +=numero;
 } 
 printf("soma eh %d\n", soma);
    return 0;              
}