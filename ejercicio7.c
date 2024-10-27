#include <stdio.h>

//Cálculo de Factorial: Escribe una función que calcule el factorial de un número. Si el número es negativo, debe devolver un mensaje de error.

int calcularFactorial(int numero)
{
    int factorial = 1;
    int i = 1;
    if (numero < 0)
    {
        printf("El número es negativo");
    }
    else
    {
        while (i <= numero)
        {
            factorial *= i;
            i++;
        }
        printf("El factorial de %d es %d", numero, factorial);
    }
}

int main()
{
    int numero;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    calcularFactorial(numero);

    return 0;
}
