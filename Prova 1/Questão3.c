#include <stdio.h>
int main()
{
    float rendimento;
    printf("Informe seu rendimento: ");
    scanf("%f", &rendimento);
    if (rendimento <= 27000)
    {
        printf("Você está insento de imposto.");
    }
    else if (rendimento > 27000 && rendimento <= 35000)
    {
        printf("Seu rendimento junto do seu imposto é: %0.2f", rendimento -(rendimento * (2.5 / 100)));
    }
    else if (rendimento > 35000 && rendimento <= 50000)
    {
        printf("Seu rendimento junto do seu imposto é: %0.2f", rendimento - (rendimento * 5 / 100));
    }
    else if (rendimento > 50000 && rendimento <= 75000)
    {
        printf("Seu rendimento junto do seu imposto é: %0.2f", rendimento - (rendimento * 10 / 100));
    }
    else if (rendimento > 75000)
    {
        printf("Seu rendimento junto do seu imposto é: %0.2f", rendimento - (rendimento * 15 / 100));
    }
    else
    {
        printf("Error");
    }
}