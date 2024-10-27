#include <stdio.h>

//Determinación de Edad: Implementa una función que reciba el año de nacimiento y devuelva la edad. Si la edad es menor de 18, debe indicar que es menor de edad.

int calcularEdad(int anoNacimiento, int anoActual) {
    int edad = anoActual - anoNacimiento;

    if(edad >= edad){
        printf("Tienes %d anos de edad y eres mayor de edad", edad);
    }else{
        printf("Tienes %d anos de edad y eres menor de edad", edad);
    }

    return edad;
}

int main() {
    int anoNacimiento, anoActual;
    printf("Ingresa tu ano de nacimiento: ");
    scanf("%d", &anoNacimiento);

    printf("Ingresa el ano actual: ");
    scanf("%d", &anoActual);

    calcularEdad(anoNacimiento, anoActual);

    return 0;
}
