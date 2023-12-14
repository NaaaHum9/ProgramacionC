#include <stdio.h>

int verificacion(int num);

int main(){
    int num1, num2;
    int num11, num22;

    printf("\mCalculadora de numero naturales\n");
    printf("\nIngrese el primer numero: ");
    scanf("%i", &num1);
    num11 = verificacion(num1);
    printf("\nIngrese un segundo numero: ");
    printf("i%", &num2);
    verificacion(num2);


    return 0;
}

int verificacion(int num){
    if (num < 0){
        printf("El numero no es valido");
    }
    return num;
}