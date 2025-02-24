#include <stdio.h>

int main(){

    int idade = 25;
    float altura = 1.75;
    char opcao = 'C';
    char nome[20] = "Caue";

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite sua alura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("O nome é: %s\n ", nome);

    printf("Digite sua opcao: ");
    scanf(" %c", &opcao);
    printf("O nome é: %c\n ", opcao);

}