#include <stdio.h>
#include <math.h>

void print(int x, int y)
{
 printf("(%d,%d)\n", x, y);
}

void calcula_coordenada(int num){
 int volta = (int)ceil((sqrt(num + 1) - 1) / 2);

 int inicio = ((volta + volta - 1) * (volta + volta - 1));
 int posicao = num - inicio + 1;

 int quantidade_de_numeros = (8 * volta);
 int total = quantidade_de_numeros;
 int tam = total / 4;
 int x, y;

 if (posicao >= 1 && posicao <tam )
 {
 x = volta-posicao;
 y = volta;
 }
 else if (posicao > tam && posicao < 2 * tam )
 {
 x = -volta;
 y = -(-volta+posicao-tam);
 }

 else if (posicao > 2 * tam && posicao < 3 * tam )
 {
 x = -(volta-(posicao-2*tam));
 y = -volta;
 }
 else if (posicao>3*tam&& posicao <4*tam)
 {
 x=volta;

 y=-(volta-(posicao-3*tam));
 }
 
 else if (posicao==tam)
 {
 x = -volta;
 y = volta;
 }
 else if (posicao==2*tam)
 {
 x = -volta;
 y = -volta;
 }
 else if (posicao==3*tam)
 {
 x = volta;
 y = -volta;
 }
 else if (posicao==4*tam)
 {
 x = volta;
 y = volta;
 
 }
 

 
 print(x, y);
}
int main()
{

// printf("Um dia isso vai funcionar\n");

 int num;
 printf("Digite o numero do ponto o qual deseja saber as coordenadas:");
 scanf("%d", &num);
 calcula_coordenada(num);
 
 
 
 return 0;
}
