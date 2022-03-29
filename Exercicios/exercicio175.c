/*
    1.7.5 Faça um programa que receba o nome do usuário, quantas
    horas ele trabalhou no mês e o valor da sua hora trabalhada.
    Mostre seu nome e o valor do seu salário. Neste caso, você deve
    reservar variáveis para o nome, quant. de horas trabalhadas, valor
    da hora e para o salario (que será calculado).
*/
#include <stdio.h>
int main(){
    char nome[30];
    float qtdTrabalhadas;
    float valorHora, salario;
    printf("Entre com o Nome do trabalhador: ");
    scanf("%s",nome);

    printf("Entre com a Quantidade de Horas Trabalhadas: ");
    scanf("%f", &qtdTrabalhadas);

    printf("Entre com o Valor da Hora: ");
    scanf("%f", &valorHora);
    salario = qtdTrabalhadas*valorHora;
    printf("O salario a ser pago para %s  R$ %.2f ",nome, salario);
}