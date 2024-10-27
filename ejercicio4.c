#include <stdio.h>

//Verificación de Primalidad: Escribe una función que determine si un número es primo o no.

int esPrimo(int numero) {
    if (numero <= 1) {
        return 0;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int numero;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    if (esPrimo(numero) == 1) {
        printf("El numero %d es primo", numero);
    } else {
        printf("El numero %d no es primo", numero);
    }

    return 0;
}
