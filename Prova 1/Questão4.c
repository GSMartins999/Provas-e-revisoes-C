#include <stdio.h>

int main()
{
    float salario;
    printf("Informe seu salário: ");
    scanf("%f", &salario);
    if (salario <= 1700)
    {
        printf("Seu salário é %0.2f e com o reajuste fica: %0.2f", salario, salario - (salario * 0.20));
    }
    else if (salario > 1700 && salario <= 2800)
    {
        printf("Seu salário é %0.2f e com o reajuste fica: %0.2f", salario, salario - (salario * 0.15));
    }
    else if (salario > 2800 && salario <= 4500)
    {
        printf("Seu salário é %0.2f e com o reajuste fica: %0.2f", salario, salario - (salario * 0.10));
    }
    else if (salario > 4500)
    {
        printf("Seu salário é %0.2f e com o reajuste fica: %0.2f", salario, salario - (salario * 0.05));
    }
}