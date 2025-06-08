/* 
Luiz Fernando Moreira Domênico

10. Faça um programa que peça um número inteiro e apresente a mensagem
“é par” ou “é ímpar”.
 
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");
        int num;

        printf("Informe um número inteiro: ");
        scanf("%i",&num);

        if(num%2 == 0){
            printf("O número digitado é par.");
        }else{
            printf("O número digitado é ímpar.");
        }

    return 0;
}
