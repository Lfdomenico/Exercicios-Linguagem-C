/* 
Luiz Fernando Moreira Domênico

4. Faça um algoritmo que peça uma senha (apenas numérica). Se a senha for
diferente de 123456, apresentar a mensagem “senha não confere!”.

*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");
    float senha;

    printf("Insira uma senha apenas numérica: ");
    scanf("%f",&senha);

    if(senha != 123456){
        printf("Senha não confere!");
    }else{
        printf("Senha correta!");
    }

    return 0;
}
