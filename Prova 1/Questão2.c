
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, z;
    printf("informe o valor dos lados do seu triangulo: ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    if (x < y + z || y < x + z || z < x + y)
    {
        if (x == y && x == z)
        {
            printf("este é um triangulo equilatero");
        }
        else if (x == y && x != z || y != x && y == z || z == x && z != y)
        {
            printf("este triangulo é isosceles");
        }
        else
        {
            printf("este triangulo é escaleno");
        }
    }
    else
    {
        printf("não forma triangulo");
    }
}