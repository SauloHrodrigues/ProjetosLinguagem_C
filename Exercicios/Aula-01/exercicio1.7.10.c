/*
    1.7.10 Faça um programa que calcule a media da temperatura
    ocorrida em um dia. O usuário deverá digitar 5 temperaturas e o
    programa deverá mostrar em tela a média das temperaturas.
*/
#include <stdio.h>
int main(){
    printf("********* MEDIA DE 5 TEMPERATURAS ****** \n\n");
    float temperatura;
    float soma = 0;
    int i;
    for (i=1; i <= 5; i++)
    {
        printf("Digite a %i temperatura: ",i);
        scanf("%f", &temperatura);
        soma = soma + temperatura;
    }
    printf("\n\n A media de temperatura foi: %.2f", soma/i);
}