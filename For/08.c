/*
  8 - Faça um algoritmo que peça um número menor que 10 e apresente os
valores deste número digitado a 10. Por exemplo, se o usuário digitar 8, deverá
apresentar os valores: 8, 9 e 10.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int i, num;


    printf("Informe um valor menor que 10: ");
    scanf("%d",&num);

    if(num < 10){
        for(i=num;i<=10;++i){
            printf("| %d |",i);
        }
    }else{
        printf("Insira um valor menor que 10 na próxima vez.");
    }

}
