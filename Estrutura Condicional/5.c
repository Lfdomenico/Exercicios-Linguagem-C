/* 
Luiz Fernando Moreira Domênico

5. Faça um algoritmo que peça uma senha (apenas numérica). Em seguida, o
algoritmo deve pedir a confirmação da senha. Se a senha repetida for igual
à original, apresentar a mensagem “Senha criada com sucesso”. Do
contrário, apresentar a mensagem “senha não confere”.

*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");
    float senha, senha_repetida;

    printf("Informe uma senha apenas numérica: ");
    scanf("%f",&senha);

    printf("Confirme a senha digitada anteriormente, escrevendo-a novamente: ");
    scanf("%f",&senha_repetida);
    printf("\n");
    if(senha == senha_repetida){
        printf("Senha criada com sucesso!");
    }else{
        printf("Senha não confere.");
    }


    return 0;
}
