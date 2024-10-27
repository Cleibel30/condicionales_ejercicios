#include <stdio.h>
#include <math.h>

// Cálculo de Raíz Cuadrada: Escribe una función que reciba un número y retorne su raíz cuadrada. Si el número es negativo, debe devolver un mensaje de error.

float raizCudrada(float numero){
    float resultado;
    if(numero < 0){
        printf("El numero %.2f es negativo", numero);
    }else{
        resultado = sqrt(numero);
        printf("La raiz cuadrada de  %.2f es %.2f", numero, resultado);
    }
}

int main(){
    float numero;
    printf("Ingresa un numero: ");
    scanf("%f", &numero);

   raizCudrada(numero);

   return 0;
}