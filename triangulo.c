#include <stdio.h>
#include <math.h>
void print(int x, int y)
{
    printf(" (%d,%d)\n", x, y);
}

void calcula_coordenadas(int num)
{
    int camada = (int)ceil((sqrt(num + 1)) / 2);
    int inicio = (camada + camada - 2) * (camada + camada - 2);

    int posicao = num - inicio + 1;
    int total = 8 * (camada - 1) + 4;
    int total_baixo = 4 * (camada - 1) + 1;
    int total_direito = 2 * (camada - 1);

    int total_esquerdo = total_direito;
    int x, y;
 
    ////////////////////Condicionais/////////////////////

    if (posicao >= 1 && posicao <= total_baixo) // OK!!!
    {
       // printf(" lado baixo");
        x = -2 * (camada - 1) + posicao - 1;
        y = -camada + 1;
    }
    else if (posicao > total_baixo + 1 && posicao < total_direito + total_baixo + 2)
    {
       // printf(" lado direito");
        x = (2 * (camada - 1)) - posicao + total_baixo + 2;
        y = (-(camada - 2)) + posicao - total_baixo - 2;
    }
    else if (posicao > total_baixo + total_direito)
    {
       // printf(" lado esquerdo");

        x = -camada + posicao;
        y = camada - posicao;
    }
    else
    {

       // printf(" quina");
        x = 0;
        y = 0;
    }
    //////////////////////////////////////////////////////
    print(x, y);
}

int main()
{

    int num;
    printf("Digite o numero do ponto o qual deseja saber as coordenadas: ");
    num;

    scanf("%d", &num);
    calcula_coordenadas(num);

    return 0;
}
