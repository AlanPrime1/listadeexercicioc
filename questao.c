#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[100];
    int idade;
    float nota1, nota2, nota3, media;


    printf("Digite seu nome:");
    scanf("%s", &nome);

    fflush(stdin);


    printf("Digite sua idade:");
    scanf("%d", &idade);

    printf("Digite a nota 1:");
    scanf("%f", &nota1);

    printf("Digite a nota 2:");
    scanf("%f", &nota2);

    printf("Digite a nota 3:");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("O nome da pessoa e:  %s \n", nome);
    printf("Idade e: %d \n", idade);
    printf("A media e: %f \n", media);


    return 0;
}
