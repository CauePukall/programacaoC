#include <stdio.h>
 
int main() {
    int numeros[5] = {10, 20, 30, 40, 50};  // Inicialização do array com valores
 
    // Acessando e imprimindo elementos específicos do array
    printf("O primeiro elemento é %d\n", numeros[0]); // [0] ---> signifca que começa no primeiro numero das {}
    printf("O terceiro elemento é %d\n", numeros[2]); // [2] ---> terceiro numero
    printf("O quinto elemento é %d\n", numeros[4]); // [4] ---> quinto numero
 
    return 0;
}

/* ARRAYS DE PALAVRAS

#include <stdio.h>
 
int main() {
    char letras[4] = {'A', 'B', 'C', 'D'};  // Array de caracteres
 
    printf("Primeira letra: %c\n", letras[0]);
    printf("Segunda letra: %c\n", letras[1]);
    printf("Terceira letra: %c\n", letras[2]);
    printf("Quarta letra: %c\n", letras[3]);
 
    return 0;
}
*/