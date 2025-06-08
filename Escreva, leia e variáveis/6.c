/*
Luiz Fernando Moreira Domênico

6. Faça um algoritmo que peça o nome do usuário, depois a idade do usuário
e, em seguida, digite a mensagem: “Legal, <nome do usuário>! Você tem
<idade> anos!”.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    char nome[50];
    char sobrenome[50];
    char cat[50];
    int idade;

    printf("Informe seu nome: ");
    scanf("%s", &nome);

    printf("Informe seu nome: ");
    scanf("%s", &sobrenome);

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    strcat(cat, nome);
    strcat(cat, sobrenome);

    printf("Legal %s %s! Você tem %i anos de idade!", nome, sobrenome, idade);

    return 0;
}
