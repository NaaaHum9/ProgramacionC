#include <stdio.h>
#include <math.h>

int main(){
    int suma;
    int num, num2;
    printf("Ingrese un numero: \n");
    scanf("%i", &num);
    printf("Ingrese un segundo numero: \n");
    scanf("%i", &num2);

    suma = num + num2;
    printf("La suma de los numeros es: \n");
    printf("%i", suma);
    

    return 0;

}
