#include <stdio.h>
#include <math.h>

//Cálculo de Hipotenusa: Crea una función que reciba los catetos de un triángulo rectángulo y calcule la hipotenusa. Si alguno de los catetos es negativo, debe devolver un error.

float calcularHipotenusa(float cateto1, float cateto2)
{
    if (cateto1 < 0 || cateto2 < 0)
    {
        printf("Uno o ambos catetos son negativos");
    }
    else
    {
        float hipotenusa = sqrt((cateto1 * cateto1) + (cateto2 * cateto2));
        printf("La hipotenusa del triangulo es: %.2f", hipotenusa);
    }
}

int main()
{
    float cateto1, cateto2;
    printf("Ingresa el valor del primer cateto: ");
    scanf("%f", &cateto1);

    printf("Ingresa el valor del segundo cateto: ");
    scanf("%f", &cateto2);

    calcularHipotenusa(cateto1, cateto2);

    return 0;
}
