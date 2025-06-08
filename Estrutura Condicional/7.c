/*
Luiz Fernando Moreira Domênico
 
7. Faça um algoritmo que peça o nome de um usuário. Em seguida, o
algoritmo deve pedir o gênero do usuário (‘f’ para feminino e ‘m’ para
masculino). Se o usuário for do sexo feminino, apresentar a mensagem
“Olá, senhora <nome>“. Do contrário, apresentar a mensagem “Olá, senhor
<nome>“. Observação: faça de conta que o usuário sempre digitará ‘f’ ou
‘m’.

*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    char nome[50];
    char sobrenome[50];
    char genero;

    printf("Informe seu nome: ");
    scanf("%s", &nome);
    printf("Informe seu sobrenome: ");
    scanf("%s",&sobrenome);


    printf("Informe seu gênero ('m' -> masculino ou 'f' -> feminino): ");
    scanf(" %c",&genero); // Espaço antes do caractere c para limpar o buffer de entrada.

    if(genero == 'm' || genero == 'M'){
        printf("Olá, senhor %s %s.", nome, sobrenome);
    }else if(genero == 'f' || genero == 'F'){
        printf("Olá, senhora %s %s.",nome, sobrenome);
    }




    return 0;
}
