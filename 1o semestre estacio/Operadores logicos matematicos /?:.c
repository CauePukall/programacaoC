#include <stdio.h>

int main(){
    int idade = 17;
    int resultado;

    idade >= 18 ? printf("Voce é maior de idade!\n") : printf("Voce é menor de idade!\n");

    int temperatura = 31;

    temperatura >= 30 ? printf("Esta calor!\n") : printf("Esta frio!\n");

    int numero1 = 40, numero2 = 60;
    int maior;

    numero1 > numero2 ? (maior = numero1) : (maior = numero2);

    printf("O numero maior é: %d\n", maior);    

    return 0;
}