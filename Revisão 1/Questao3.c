/******************************************************************************
Faça um programa em C que solicita que seja informado um valor referente a um ano e
informa na tela se esse ano foi/será bissexto. Para determinar se um ano foi ou será
bissexto, deve obedecer a seguinte condição:
Tem que ser divisível por 4 e não pode ser divisível por 100. Se for divisível por 100 também
tem que ser divisível por quatrocentos.
*******************************************************************************/
#include <stdio.h>
int main()
{
    int ano;
    printf("Informe o ano que desejar: ");
    scanf("%d", &ano);
    if (ano % 4 == 0 && ano % 100 != 0)
    {
        printf("Esse ano foi/será/é bissexto");
    }
    else if (ano % 100 == 0 && ano % 400 == 0)
    {
        printf("Esse ano foi/será/é bissexto");
    }
    else
    {
        printf("Esse ano não é bissexto");
    }
}