#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
int main()
{
    int quantParce, i, p, parcelas;
    float valor, valorParc;
    printf("Informe o total gasto na compra: \n");
    scanf("%f", &valor);
    do
    {
        printf("Escolha sua forma de pagamento.\n");
        printf("1- a vista com desconto de 10%% \n");
        printf("2- em duas vezes, com preço da etiqueta \n");
printf("Informe a quantidade de parcelas, sendo de 3 a 10 vezes e com juros de 3%% ao mes\n");
scanf("%d", &parcelas);
    } while (parcelas > 2 && valor < 100);
    switch (parcelas)
    {
    case 1:
valor = valor - (valor * 0.1);
printf("valor a pagar: %2.f", valor);
break;
    case 2:
valor = valor / 2;
printf("valor a pagar em duas parcelas de: %5.2f", valor);
break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
p = 1;
for (i = parcelas; i >= 1; i--)
{
    valorParc = valor / i;
    printf("valor da parcela %d: R$ %.2f \n", p, valorParc);
    valor -= valorParc;
    valor *= 1.03;
    p++;
}
break;
    default:
printf("inválido!\n");
    }
}