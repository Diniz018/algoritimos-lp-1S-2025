#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("Numeros menores ou iguais a 1 nao sao primos.\n");
        return 0;
    }

    int primo = 1;

    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            primo = 0;
            break;
        }
    }

    if (primo) {
        printf("O numero eh primo!\n");
    } else {
        printf("O numero nao eh primo!\n");
    }

    return 0;
}