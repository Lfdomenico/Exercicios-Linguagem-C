/*
  8 - Fa�a um algoritmo que pe�a um n�mero menor que 10 e apresente os
valores deste n�mero digitado a 10. Por exemplo, se o usu�rio digitar 8, dever�
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
        printf("Insira um valor menor que 10 na pr�xima vez.");
    }

}
