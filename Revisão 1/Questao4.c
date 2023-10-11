/******************************************************************************
Faça um programa em C que simula o módulo contador de notas para caixas eletrônicos.
O programa deverá solicitar que seja informado o valor do saque (considerar apenas
valores inteiros)
e informar com quantas cédulas de Real podemos representar o valor. Procure minimizar o
número de cédulas
usadas e suponha que a máquina sempre tem disponíveis as cédulas necessárias:
Exemplo de resposta:
R$ 218 = 2 cédulas de 100, 1 cédula de 10, 1 cédula de 5, 1 cédula de 2 e 1 cédula de 1.
*******************************************************************************/
#include <stdio.h>
int main()
{
    int valorSaque, arm;
    printf("Digite o valor do saque (em Reais): R$ ");
    scanf("%d", &valorSaque);
    arm = valorSaque;
    int cedula100 = 0, cedula50 = 0, cedula20 = 0, cedula10 = 0, cedula5 = 0, cedula2 = 0,
        cedula1 = 0;
    while (valorSaque > 0)
    {
        if (valorSaque >= 100)
        {
            cedula100++;
            valorSaque -= 100;
        }
        else if (valorSaque >= 50)
        {
            cedula50++;
            valorSaque -= 50;
        }
        else if (valorSaque >= 20)
        {
            cedula20++;
            valorSaque -= 20;
        }
        else if (valorSaque >= 10)
        {
            cedula10++;
            valorSaque -= 10;
        }
        else if (valorSaque >= 5)
        {
            cedula5++;
            valorSaque -= 5;
        }
        else if (valorSaque >= 2)
        {
            cedula2++;
            valorSaque -= 2;
        }
        else if (valorSaque >= 1)
        {
            cedula1++;
            valorSaque -= 1;
        }
    }
    printf("R$ %d = %d cédulas de 100, %d cédulas de 50, %d cédulas de 20, %d cédulas de 10, %d cédulas de 5, % d cédulas de 2 e % d cédulas de 1\n ", arm, cedula100, cedula50, cedula20,cedula10, cedula5, cedula2, cedula1);
    return 0;
}