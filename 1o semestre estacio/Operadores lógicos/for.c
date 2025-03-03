#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
   
    return 0;
}

/*
#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
   
    return 0;
}

#include <stdio.h>      VAI DE 0 A 100 (DE 10 EM 10)
 
int main() {
    for (int i = 0; i <= 100; i += 10) {
        printf("%d\n", i);
    }
   
    return 0;
}

#include <stdio.h>      VAI DE 100 A 0 (DE 10 EM 10)  
 
int main() {
    for (int i = 100; i >= 0; i -= 10) {
        printf("%d\n", i);
    }

    return 0;
}

int main (){            TABUADA

    int numero, i;

    printf("Digite um numero para calcularmos a tabuada: ");
    scanf("%d", &numero);

    for (i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n", i, numero, i * numero);
    }

    return 0;
}

*/