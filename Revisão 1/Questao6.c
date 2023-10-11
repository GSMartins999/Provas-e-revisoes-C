#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int vetor[100];
    int frequencia[21] = {0};
    int maior1 = 0, maior2 = 0;
    int numMaior1 = 0, numMaior2 = 0;
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 20 + 1;
        frequencia[vetor[i]]++;
    }

    printf("Vetor de 100 números aleatórios entre 1 e 20:\n");
    for (int i = 0; i < 100; i++)
    {
        printf("%2d ", vetor[i]);
    }
    printf("\n");

    for (int i = 1; i <= 20; i++)
    {
        if (frequencia[i] > frequencia[numMaior1])
        {
            numMaior2 = numMaior1;
            maior2 = maior1;
            numMaior1 = i;
            maior1 = frequencia[i];
        }
        else if (frequencia[i] > frequencia[numMaior2])
        {
            numMaior2 = i;
            maior2 = frequencia[i];
        }
    }

    printf("O número %d ocorreu %d vezes e o número %d ocorreu %d vezes.\n",
           numMaior1, maior1, numMaior2, maior2);
    return 0;
}