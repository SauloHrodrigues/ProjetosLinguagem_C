/*
    1.7.8 Faça um programa que permita que o usuário digite dois
    valores inteiros. Multiplique estes valores guardando o produto em
    uma terceira variável. Mostre o resultado da multiplicação.
*/
#include <stdio.h>
int main(){
    int num01, num02, resultado;
    printf("************* MULTIPLICACAO *************** \n ");
    printf("Entre com o 1o. numero: ");
    scanf("%i", &num01);
    printf("Entre com o 2o. numero: ");
    scanf("%i", &num02);
    printf("\n");
    resultado = num01 * num02;
    printf("A multiplcacao de %i X %i = %i",num01, num02,resultado);
}