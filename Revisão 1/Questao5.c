#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int matriz[10][10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            matriz[i][j] = rand() % 50 + 1;
        }
    }
    printf("Matriz 10x10:\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
    float mediaColunasPares = 0.0;
    for (int j = 0; j < 10; j += 2)
    {
        float soma = 0.0;
        for (int i = 0; i < 10; i++)
        {
            soma += matriz[i][j];
        }
        mediaColunasPares += soma / 10;
    }
    float mediaLinhasImpares = 0.0;
    for (int i = 1; i < 10; i += 2)
    {
        float soma = 0.0;
        for (int j = 0; j < 10; j++)
        {
            soma += matriz[i][j];
        }
        mediaLinhasImpares += soma / 10;
    }
    float diferenca = mediaColunasPares - mediaLinhasImpares;
    printf("\nDiferença entre a média das colunas pares e a média das linhas ímpares: %.2f\n",
           diferenca);
    return 0;
}