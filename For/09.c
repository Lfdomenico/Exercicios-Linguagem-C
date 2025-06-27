/*
  09 - Faça um algoritmo que peça um número inicial e um número final. Em
seguida, deve ser apresentada a contagem do número inicial ao número final.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int num_inicial, num_final, i;

    printf("Insira um número inicial: ");
    scanf("%d",&num_inicial);
    printf("Insira um número final: ");
    scanf("%d",&num_final);

    if(num_inicial > num_final){
        printf("O valor inicial deve ser menor que o valor final.");

    }else{

        for(i = num_inicial; i<= num_final; ++i){
            printf("| %d |",i);
        }
    }

    return 0;
}
