/********************************************************
    3.3.6 Implementar um programa que imprima a tabuada de um
    número digitado pelo usuário.
*********************************************************/
#include<stdio.h>
int main(){
  int numero, cont=0;
  printf("************ TABUADA ****************\n\n\n");
  printf("Escolha um numero: ");
  scanf("%i",&numero);
  while (cont<=10)
  {
    printf("%i X %i = %i ", numero, cont, numero*cont);
    cont++;
  }
}