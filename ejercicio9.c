#include <stdio.h>

int clasificarNumero(int numero) {
    if (numero % 2 == 0) {
        printf("El numero %d es par", numero);
    } else {
        printf("El numero %d es impar", numero);
    }
}

int main() {
    int numero;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    clasificarNumero(numero);

    return 0;
}
