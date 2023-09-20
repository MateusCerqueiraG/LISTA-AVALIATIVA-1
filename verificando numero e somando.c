#include <stdio.h>

int main() {
    
    int numero;
    int original;
    int soma = 0;

    scanf("%d", &numero);

    if (numero > 0 || numero < 1000000000) {
        
        original = numero;  
        
        while (numero != 0) {
            soma += numero % 10;  
            numero /= 10;        
        }

        if (original % 2 == 0) {
            printf("%d eh par.\n", original);
        } else {
            printf("%d eh impar.\n", original);
        }

        printf("A soma dos algarismos de %d eh %d\n", original, soma);
    }

    return 0;
}