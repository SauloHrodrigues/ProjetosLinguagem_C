/*
    1.7.7 Faça um programa que receba do usuário um numero qualquer e
    mostre o quadrado deste número.
*/
#include<stdio.h>
#include <math.h>
int main(){
    int num;
    printf("Entre com um numero: ");
    scanf("%i",&num);
    int res = pow(num,2);
   printf("O numero %d elevado a 2 e: %d ",num, res);
}