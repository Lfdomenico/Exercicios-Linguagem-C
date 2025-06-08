/*
Luiz Fernando Moreira Domênico

4. Faça um algoritmo que peça o nome do usuário e, em seguida, digite a
mensagem: “Seja bem vindo, <nome do usuário>.
*/

#include<stdio.h>
#include<string.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    char nome[50];
    char sobrenome[50];
    char cat[50];

    printf("Informe seu nome:");
    printf("\n");
    scanf("%s",&nome);

    printf("Informe seu sobrenome:");
    printf("\n");
    scanf("%s",&sobrenome);


    strcat(cat, nome);
    strcat(cat, sobrenome);

    printf("Olá %s %s", nome, sobrenome);

    return 0;
}
