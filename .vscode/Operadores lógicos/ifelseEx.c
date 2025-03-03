#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoquemin = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if (temperatura > 30){
           printf("Temperatura alta!\n");
    } else {
           printf("Temperatura dentro do parametro.\n");
    }

    if (umidade > 45){
         printf("Umidade alta!\n");
    } else {
          printf("Umidade normal.\n");
    }

    if(estoque < estoquemin){
        printf("Estoque baixo!\n");
    } else {
        printf("Estoque normal.");
    }

}