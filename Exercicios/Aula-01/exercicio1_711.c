/* 
    1.7.11Para calcular a área de um retângulo, podemos multiplicar
    sua largura pelo seu comprimento. Permita que o usuário entre
    com a largura e comprimento de um retângulo qualquer e mostre
    sua área.
*/
#include<stdio.h>
int main(){
    float largura, comprimento, area;
    printf("************CALCULO DA AREA DO RETANGULO **************\n\n");
    printf("Entre com a largura do retangulo: ");
    scanf("%f", &largura);
    printf("Entre com o comrimento do retangulo: ");
    scanf("%f", &comprimento);
    area = largura * comprimento;
    printf("A area do retangulo de largura %2.f e comprimento %2.f eh: %2.f",
    largura, comprimento, area);
}