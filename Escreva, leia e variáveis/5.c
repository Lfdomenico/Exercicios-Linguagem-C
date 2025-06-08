/*
Luiz Fernando Moreira Domênico

5. Faça um algoritmo que peça a idade do usuário e, em seguida, digite a
mensagem: “Legal! Você tem <idade> anos!”.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int idade;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    printf("Legal! Você tem %d anos!",idade);

    return 0;
}
