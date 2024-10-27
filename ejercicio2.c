#include <stdio.h>

//Clasificación de Triángulos: Crea una función que reciba tres lados de un triángulo y determine si es equilátero, isósceles o escaleno.

float triangulo(float a, float b, float c)
{
    if ((a == b && a == c) && (b == a && b == c) && (c == a && c == b))
    {
        printf("El triangulo es equilatero");
    }
    else if ((a != b && a != c) && (b != a && b != c) && (c != a && c != b))
    {
        printf("El triangulo es escaleno");
    }
    else
    {
        printf("El triangulo es isosceles");
    }
}

int main()
{
    float a, b, c;
    printf("Ingresa el primer lado del triangulo: ");
    scanf("%f", &a);

    printf("Ingresa el segundo lado del triangulo: ");
    scanf("%f", &b);

    printf("Ingresa el tercer lado del triangulo: ");
    scanf("%f", &c);

    triangulo(a, b, c);

    return 0;
}