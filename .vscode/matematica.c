#include <stdio.h>

int main(){
    int n1, n2;
    int soma, sub, mult, div;

    printf("Entre com o n1:\n");
    scanf("%d", &n1);
    printf("Entre com o n2:\n");
    scanf("%d", &n2);

    soma = n1 + n2;

    sub = n1 - n2;

    mult = n1 * n2;

    div = n1 / n2;

    printf("A soma é: %d\n", soma);
    printf("A sub é: %d\n", sub);
    printf("A mult é: %d\n", mult);
    printf("A div é: %d\n", div);

    }