/*
    1.7.3 Faça um programa que imprima um nome, escolhido pelo
    usuário, na tela. Você deverá permitir que o usuário digite (função
    scanf()) este nome, definindo uma variável para guardar este
    nome na memória.
*/
#include <stdio.h>
int main(){
    char nome[30];
    printf("Entre com o nome do usuario: ");
    scanf("%s",nome);
    printf("O nome digitado foi: %s ",nome);

}