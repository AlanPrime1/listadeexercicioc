#include <stdio.h>
#include <stdlib.h>

int main()
{

    float nota;

    printf("Digite uma nota:");
    scanf("%f", &nota);

    if (nota > 10)
    {
        printf("A nota é maior que 10!");
    }
    else if ( nota = 10)
    {
        printf("Nota igual a 10!");
    }
    else
    {
        printf("Nao e maior que 10!");
    }

    return 0;
}
