#include <stdio.h>

int main(){

    int a = 10, b = -5;

    if (a > 0 && b > 0)
    {
        printf("Os dois numeros sao positivos!\n");
    } else {
        printf("Pelo menos um é negativo!\n");
    }

    int x = -10, y = 5;

    if (x > 0 || y > 0)
    {
        printf("Pelo menos um numero é positivo.\n");
    } else {
        printf("Os dois numeros sao negativos.\n");
    }
    
    int c = 10;

    if (!c){
        printf("A variavael C é zero!");
    } else{
        printf("A variavel C é diferente de 0.\n");
    }

    int d = -10;

    if (! (d > 0)){
        printf("A variavel D é negativa.\n");
    } else {
        printf("A variavel D é positiva.\n");
    }

}