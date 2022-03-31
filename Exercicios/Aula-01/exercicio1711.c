/*
    1.7.11 A tabela abaixo mostra o valor do câmbio de moedas
    estrangeiras para cada real. Faça um programa onde o usuário
    entre com uma quantia em real e o programa mostre este valor
    em outras moedas.
            Moeda    -  Valor (R$)
            1 Dolar  -   1.9
            1 Euro   -   3.1
*/
#include<stdio.h>
int main(){
    float valorReal, dolar, euro;
    printf("Digite o valor para ser convertido (R$):  ");
    scanf("%f", &valorReal);
    dolar = valorReal / 1.9;
    euro = valorReal / 3.1;
    printf("\n %.2f reais compra %.2f dolares!", valorReal, dolar);
    printf("\n %.2f reais compra %.2f euros!", valorReal, euro);
}