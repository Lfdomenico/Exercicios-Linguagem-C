/*
Luiz Fernando Moreira Domênico

7. Faça um algoritmo que peça a idade do usuário, depois o ano de
nascimento do usuário, e apresente a mensagem: “Você tem <idade> anos
e nasceu em <ano de nascimento>!”
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int idade, ano_nascimento;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

     printf("Informe seu ano de nascimento: ");
    scanf("%i", &ano_nascimento);

    printf("Você tem %i anos e nasceu em %i!", idade, ano_nascimento);



    return 0;
}
