#include "Calculadora.h"

int suma(int num1, int num2){
    int sumarNumeros;
    sumarNumeros = num1 + num2;
    return sumarNumeros;
}

int resta(int num1, int num2){
    int restaNumeros;
    restaNumeros = num1 - num2;
    return restaNumeros;
}

float division(int num1, int num2){
    float divisionNumeros;
    if (num2 != 0){
        divisionNumeros = num1/num2;
    }else{
        return 0;
    }
    return divisionNumeros;
}

int multiplicacion(int num1, int num2){
    int multiNumeros;
    multiNumeros = num1 * num2;
    return multiNumeros;
}