/*
    1.7.6 Os funcionários da empresa “ToadaGoo”, recebem para
    cada hora extra, 50% a mais do valor da hora normal. Faça um
    programa que receba o nome de um funcionário, quantas horas
    normais e quantas horas extras ele trabalhou, assim como o valor
    da hora normal. Mostre, no final do programa, o salario líquido
    deste funcionário.
*/
#include <stdio.h>
int main(){
    char nomeFuncionario[30];
    double salario, horaExtras;
    float qtdHorasExtras;
    printf("Entre com o nome do funcionario: ");
    scanf("%s", nomeFuncionario);
    printf("Entre com o salario: ");
    scanf("%lf",&salario);
    printf("Entre com a quantidade de horas extras: ");
    scanf("%f", &qtdHorasExtras);
    horaExtras = (((salario/220)*1.5)*qtdHorasExtras);
    printf("%s fez %f horas extras, e vai receber R$ %.2f", nomeFuncionario, qtdHorasExtras, horaExtras);
}