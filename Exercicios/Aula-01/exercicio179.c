/*
    1.7.9 Faça um programa de uma calculadora simples que permita
    que o usuário digite dois valores inteiros. A calculadora, logo após
    a digitação dos números, deverá mostrar o valor da soma, da
    subtração, da multiplicação e da divisão dos valores digitados.
*/
#include<stdio.h>
int main(){
    int num01, num02;
    printf("############# CALCULADORA ###################\n \n");
    printf("Digite o 1o numero: ");
    scanf("%i", &num01);
    printf("Digite o 2o numero: ");
    scanf("%i", &num02);
    printf("\n \n");
    printf(" A Soma de %i + %i = %i \n ", num01, num02, num01 + num02);
    printf("A Subtracao de %i + %i = %i \n ", num01, num02, num01 - num02);
    printf("A Multiplicacao de %i + %i = %i \n ", num01, num02, num01 * num02);
    printf("A Divisao de %i + %i = %i \n ", num01, num02, num01 - num02);
}