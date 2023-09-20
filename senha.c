#include <stdio.h>

int main() {
    
    int senha;
    int senhadois;
    int senhaValida = 0;

    scanf("%d", &senha);

    printf("senha cadastrada: %d\n", senha);

    scanf("%d", &senhadois);

    while (senhadois != senha) {
        
        printf("senha invalida!\n");
        scanf("%d", &senhadois);

    }

    if (senhadois == senha) {
        printf("senha valida!\n");
    }

    return 0;
}