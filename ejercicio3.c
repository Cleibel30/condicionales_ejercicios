#include <stdio.h>

//Conversión de Grados: Implementa una función que convierta temperaturas de Celsius a Fahrenheit y viceversa, dependiendo de la opción seleccionada.

void convertirTemperatura(char opcion, float temperatura) {
    float resultado;

    if (opcion == 'C' || opcion == 'c') {
        resultado = (temperatura * 9/5) + 32;
        printf("%.2f grados Celsius son %.2f grados Fahrenheit", temperatura, resultado);
    } else if (opcion == 'F' || opcion == 'f') {
        resultado = (temperatura - 32) * 5/9;
        printf("%.2f grados Fahrenheit son %.2f grados Celsius", temperatura, resultado);
    } else {
        printf("Opción no válida. Usa 'C' para Celsius o 'F' para Fahrenheit");
    }
}

int main() {
    char opcion;
    float temperatura;

    printf("Selecciona la opcion de conversion (C para Celsius a Fahrenheit, F para Fahrenheit a Celsius): ");
    scanf(" %c", &opcion);

    printf("Ingresa la temperatura: ");
    scanf("%f", &temperatura);

    convertirTemperatura(opcion, temperatura);

    return 0;
}
