/*
Luiz Fernando Moreira Domênico

10. Faça um algoritmo que peça uma temperatura em graus célsius e apresente
seu respectivo valor em farenheits. O cálculo de conversão é: F= (9*C/5) +
32.
*/
#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float temp_celsius;

    printf("Informe uma temperatura em ºC: ");
    scanf("%f",&temp_celsius);

    float temp_farenheit = ((9*temp_celsius)/5) + 32;

    printf("\n");
    printf("Após a conversão, a temperatura em ºF é: %.2f",temp_farenheit);

    return 0;
}
