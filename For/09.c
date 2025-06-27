/*
  09 - Fa�a um algoritmo que pe�a um n�mero inicial e um n�mero final. Em
seguida, deve ser apresentada a contagem do n�mero inicial ao n�mero final.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int num_inicial, num_final, i;

    printf("Insira um n�mero inicial: ");
    scanf("%d",&num_inicial);
    printf("Insira um n�mero final: ");
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
