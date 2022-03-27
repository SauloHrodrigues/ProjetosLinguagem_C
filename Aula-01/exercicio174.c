/*
    1.7.4 Faça um programa que receba o nome e a idade do usuário
    e depois mostre-os na tela. Devem ser definidas duas variáveis
    para guardar nome e idade na memória.
*/
#include <stdio.h>
int main(){
    char nome[30];
    int idade;
    printf("Entre com o nome do usuario: ");
    scanf("%s", nome);
    printf("Entre com a idade: ");
    scanf("%d", &idade);
    printf("O usuario %s tem %d anos.",nome, idade);
}