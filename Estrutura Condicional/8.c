/* 
Luiz Fernando Moreira Domênico

8. Faça um algoritmo que peça dois valores inteiros. Em seguida, o algoritmo
deve apresentar primeiro o valor mais baixo e, depois, o valor mais alto.

*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int a, b;

    printf("Insira o primeiro valor: ");
    scanf("%i",&a);

    printf("Insira o segundo valor: ");
    scanf("%i", &b);

    if(a < b){
        printf("Valor mais baixo: %i. ",a);
        printf("Valor mais alto: %i.",b);
        printf("\n");
        printf("%i > %i",b,a);
    } else if (a > b){
        printf("Valor mais baixo: %i. ",b);
        printf("Valor mais alto: %i.",a);
        printf("\n");
        printf("%i > %i", a,b);
    } else{
        printf("Valores iguais.");
        printf("\n");
        printf("%i = %i",a,b);
    }


    return 0;
}
