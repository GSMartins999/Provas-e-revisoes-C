#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100], letra;
    int i, tam, quant;
    printf("Digite uma frase: \n");
    scanf(" %c[^\n]s", &frase);
    printf("Digite uma letra: \n");
    scanf(" %c", &letra);
    tam = strlen(frase);
    for (i = 0; i < tam; i++)
    {
        if (frase[i] == letra)
        {
            quant++;
        }
    }
    printf("a letra %c aparece %d vezes: ", letra, quant);
}