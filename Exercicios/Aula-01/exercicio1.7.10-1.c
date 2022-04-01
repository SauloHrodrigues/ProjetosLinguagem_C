/*
    1.7.10 Faça um programa que calcule e mostre o salário líquido
    de um funcionário. O programa deve receber o salário bruto e
    considerar que todo funcionário tem um desconto de 10% de IR
    no salário bruto.
*/
#include<stdio.h>
int main(){
    float salBruto, salLiguido;
    printf("*********** SALARIO LIGUIDO (-10/100)*********\n\n");
    printf("Entre com o Salario Bruto: ");
    scanf("%f", &salBruto);
    salLiguido = salBruto * 0.90;
    printf("O salario bruto de %.2f tera o desconto de IRR em: R$ %.2f, restando o liguido em: R$  %.2f"
    , salBruto,(salBruto-salLiguido), salLiguido);
}