#include <stdio.h>
 
int main() {
    int i = 1;
   
    while (i <= 5) {
        printf("%d\n", i);
        i++; //* vai de 1 ate 5!
    }
   
    return 0;
}

 /* 
 #include <stdio.h>
 
int main() {
    int num;
   
    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;
} *\