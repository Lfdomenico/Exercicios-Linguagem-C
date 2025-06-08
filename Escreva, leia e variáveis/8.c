/*
Luiz Fernando Moreira Domênico

8. Faça um algoritmo que peça o ano de nascimento do usuário e apresente
sua provável idade.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int ano_nascimento;

    printf("Informe seu ano de nascimento: ");
    scanf("%i", &ano_nascimento);

    int idade = 2025 - ano_nascimento;

    printf("Quer dizer que você, provavelmente, tem %d anos de idade.",idade);

    return 0;
}
