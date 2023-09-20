#include <stdio.h>

int main() {
    
    char nivel;
    float salario;
    float aumento;
    float salariodois;

    scanf("%c", &nivel);

    scanf("%f", &salario);

    switch (nivel) {
        case 'a':
            aumento = 0.05 * salario;
            break;
        case 'b':
            aumento = 0.07 * salario;
            break;
        case 'c':
            aumento = 0.08 * salario;
            break;
    }

    salariodois = salario + aumento;

    printf("%.2f\n", salariodois);

    return 0;
}