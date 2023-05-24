#include <stdio.h>
#include <stdlib.h>

int main()
{

   float nota1, nota2, produto, menorvalor, maiorvalor, soma, media;


   printf("Digite a primeira nota:");
    scanf("%f", &nota1);
 
   printf("Digite a segunda nota:");
   scanf("%f", &nota2);


    soma = (nota1+nota2);
    produto = (nota1*nota2);
    media = soma/2;

    printf("\n");


    printf("Soma das notas e: %f \n", soma);
    printf("O produto das notas e: %f \n", produto);
    printf("A media e: %f \n", media);

if (nota1 > nota2)
{
     maiorvalor = nota1;

}
else{

    maiorvalor = nota2;
}


if (nota1 < nota2)
{
    menorvalor = nota1;
}
else{
    menorvalor = nota2;
}


    
    printf("O maior numero e: %f \n",maiorvalor);
    printf("O menor numero e: %f \n" , menorvalor);


    return 0;
}
