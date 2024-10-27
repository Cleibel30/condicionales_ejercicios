#include <stdio.h>

//Clasificación de Números: Crea una función que reciba un número y verifique si es positivo, negativo o cero.

float verificarNumero(float numero) {
    if (numero > 0) {
        printf("El numero %.2f es positivo", numero);
    } else if (numero < 0) {
        printf("El numero %.2f es negativo", numero);
    } else {
        printf("El numero es cero");
    }
}

int main() {
    float numero;
    printf("Ingresa un numero: ");
    scanf("%f", &numero);

    verificarNumero(numero);

    return 0;
}
