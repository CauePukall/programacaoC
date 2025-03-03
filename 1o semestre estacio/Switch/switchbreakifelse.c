#include <stdio.h>

int main(){
    int dia;

    printf("Escolha um dia: \n");
    scanf("%d", &dia);

    if(dia == 1 ){
        printf("Domingo\n");
    } else if (dia == 2) {
        printf("Segunda\n");
    } else if (dia == 3){
        printf("Terça\n");
    } else if (dia == 4){
        printf("Quarta\n");
    } else if (dia == 5) {
        printf("Quinta\n");
    } else if (dia == 6){
        printf("Sexta\n");
    } else {
        printf("Sabado\n");
    }

    int dias;

    printf("Escolha um dia: \n");
    scanf("%d", &dias);

    switch (dias)
    {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
    case 7:
        printf("Sabado\n");
        break;
    default:
        printf("Invalido\n");
    }

}

   