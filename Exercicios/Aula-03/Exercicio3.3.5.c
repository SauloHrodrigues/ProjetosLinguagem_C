/***************************************************************
3.3.5Um usuário tem em suas mãos 100 Notas Fiscais. Faça um
programa que receba seus valores e calcule o total de todas as
Notas.
****************************************************************/
#include<stdio.h>
int main(){
  float valorNF, totalNF=0;
  int cont = 1;
  printf("*********** SOMA DE NOTAS FISCAIS ***************\n\n");
  while (cont<=10)
  {
    printf("Entre com o valor da %i.a: ", cont);
    scanf("%f",&valorNF);
    totalNF = totalNF + valorNF;
    cont++;
  }
  printf("A soma dos valores das notas e: R$ %.2f ", totalNF);
}
