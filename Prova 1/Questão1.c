#include <stdio.h>
int main()
{
    int i, n, somaPar, par, somaImpar, impar, maior, menor;
    float media = 0.0;
    for (i = 1; i <= 10; i++)
    {
        printf("Informe um valor: ");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            impar++;
            somaImpar += n;
        }
        else
        {
            par++;
            somaPar += n;
        }
        media = somaPar;
        if (n > maior)
        {
            maior = +n;
        }
        else if (n < menor)
        {
            menor = +n;
        }
    }
    media /= par;
    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);
    if (par != 0)
    {
        printf("A média dos números pares é: %5.2f \n", media);
    }
    else
    {
        printf("A média é zero ou não houve número pares");
    }
}
