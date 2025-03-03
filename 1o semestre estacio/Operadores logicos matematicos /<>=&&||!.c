#include <stdio.h>

int main(){
    
    int a = 5;
    int b = 10;
    int c = 1;

    if (a > 0 && b < 0 || c == 0){
        printf("A condiçao é verdadeira.\n");
    } else {
        printf("A condiçao é falsa.\n");
    }

    int idade = 17;
    float altura = 1.75;

    if (idade > 18 && idade < 30 && altura > 1.70){
        printf("Voce esta na faixa etaria e tem altura adequada.\n");
    } else {
        printf("Voce nao esta na faixa etaria e altura adequada.\n");
    }

}