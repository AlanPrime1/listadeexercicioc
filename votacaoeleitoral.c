#include <stdio.h>
#include <stdlib.h>

int main()
{

int idade;

printf("digite sua idade:");
scanf("%d",&idade);

if ((idade<18) ||(idade>65))
{
  printf("Voce nao tem que votar!");
}
else
{
printf("Voce precisa votar");    
}





    return 0;
}
