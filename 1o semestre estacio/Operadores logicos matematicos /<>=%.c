#include <stdio.h>

int main() {
    int idade = 20;
  
    if (idade >= 18) {
      printf("Você é maior de idade\n");
    }

    float temperatura = 32.0;

    if (temperatura > 30.0) {
      printf("Está calor\n");
    }

    int idade1 = 25;
    int idade2 = 30;

   //condiçao dará falsa e nao aparecerá nada//
    if (idade1 > idade2) {
      printf("Pessoa 1 é mais velha que Pessoa 2\n");
    }

    int numero = 4, resultado;

    resultado = numero % 2;

    printf("A variavel resultado é: %d\n", resultado);

  if (numero % 2 == 0) {
    printf("O número é par\n");
  }

  int estoque = 3;

  if (estoque < 5) {
    printf("Estoque baixo\n");
  }
  
    return 0;
  }