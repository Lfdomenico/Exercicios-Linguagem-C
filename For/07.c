/*
  7 -  Fa�a um algoritmo que pe�a um n�mero positivo maior que 0 e
apresente os valores de 1 a este valor digitado.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int i, num;


    printf("Informe um n�mero positivo: ");
    scanf("%d", &num);


    if (num > 0) {

        for(i = 1; i <= num; ++i){
            printf("%d ", i);
        }
    } else {
        printf("Por favor, informe um n�mero positivo maior que 0.\n");
    }

    return 0;
}
