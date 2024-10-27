#include <stdio.h>
#include <math.h>

float calcularPotencia(float base, float exponente)
{
    if (exponente < 0)
    {
        printf("El exponente es negativo");
    }
    else
    {
        double resultado = pow(base, exponente);
        printf("%.2f elevado a %.2f es %.2f", base, exponente, resultado);
    }
}

int main()
{
    float base;
    float exponente;

    printf("Ingresa la base: ");
    scanf("%f", &base);

    printf("Ingresa el exponente: ");
    scanf("%f", &exponente);

    calcularPotencia(base, exponente);

    return 0;
}
