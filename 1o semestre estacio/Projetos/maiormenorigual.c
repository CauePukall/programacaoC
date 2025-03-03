#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numJogador, numComputador, resultado;
    char tipoComparacao;

    // Gerador de números aleatórios
    srand(time(0));
    numComputador = rand() % 100 + 1; // número entre 1 e 100

    // Início do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Voce deve escolher um numero e o tipo de comparacao.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha uma comparacao: ");
    scanf(" %c", &tipoComparacao); // Espaço antes do %c para ignorar espaços em branco

    printf("Digite seu numero entre 1 e 100: ");
    scanf("%d", &numJogador);

    // Exibir o número do computador
    printf("O numero do computador é: %d\n", numComputador);

    // Comparação
    switch (tipoComparacao)
    {
    case 'M':
    case 'm':
        printf("Voce escolheu a opcao maior.\n");
        resultado = numJogador > numComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Voce escolheu a opcao menor.\n");
        resultado = numJogador < numComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Voce escolheu a opcao igual.\n");
        resultado = numJogador == numComputador ? 1 : 0;
        break;
    default:
        printf("Opcao de jogo invalida!\n");
        break;
    }

    // Exibir resultado
    if (resultado == 1)
    {
        printf("Voce venceu!\n");
    } else {
        printf("Voce perdeu!\n");
    }

    return 0;
}
