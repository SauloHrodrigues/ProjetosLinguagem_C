/***************************************************************************
         1.7.12Supondo que um engenheiro deseja saber qual a distância
        entre 2 pontos em um terreno. Porém ele sabe apenas as
        coordenadas (x,y) de cada ponto. Faça um programa que resolva
        este problema para o engenheiro, sabendo que o cálculo da
        distância é dado por:
      
****************************************************************************/
#include <stdio.h>
#include<math.h>
int main(){
float x1, x2, y1,y2, distancia;
printf("*************** CALCULO DA DISTANCIA ENTRE DOIS PONTOS **************\n\n\n");
printf("Entre com as coordenada do 1o. Ponto: \n");
printf("x1: ");
scanf("%f",&x1);
printf("y1: ");
scanf("%f",&y1);
//------------------------------------------------------
printf("Entre com as coordenada do 2o. Ponto: \n");
printf("x2: ");
scanf("%f",&x2);
printf("y2: ");
scanf("%f",&y2);
distancia = sqrt((pow(x2-x1,2))+(pow(y2-y1,2)));
printf("%.2f", distancia);
}