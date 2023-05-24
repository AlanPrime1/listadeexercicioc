#include <stdio.h>
#include <stdlib.h>

int main()
{

char nomesalvo[250] = "Alan" , senhasalva[250]= "123";
char login[250], senha[250];

printf("Digite seu login:");
gets(login);

fflush(stdin); // limpar cache (buffer)

printf("Digite sua senha:");
gets(senha);

if (strcmp(login, nomesalvo) ==0 && strcmp(senha,senhasalva) ==0 ) 
{
    printf("Bem vindo");
}
else
{
    printf("Login ou senha invalida");
}





    return 0;
}
