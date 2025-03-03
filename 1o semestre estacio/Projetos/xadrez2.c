#include <stdio.h>

int main(){
    
    int c1, c;
    char movimento1[] = "Baixo";
    char movimento2[] = "Esquerda";

    printf("Movimento do Cavalo:\n");

    for (c = 0; c < 2; c++) 
    {
        printf("%s\n", movimento1);
    }
    
    while (c1 < 1)
    {
        printf("%s\n", movimento2);
        c1++;
    }

    printf("\n");

    return 0;
}
