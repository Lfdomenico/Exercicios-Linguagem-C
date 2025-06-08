/*
Luiz Fernando Moreira Domênico

11. Faça um algoritmo que peça uma temperatura em graus farenheits e
apresente seu respectivo valor em celsius. O cálculo de conversão é: C=
5*(F-32)/9.
*/
#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float temp_farenheit;

    printf("Informe uma temperatura em ºF: ");
    scanf("%f",&temp_farenheit);

    float temp_celsius = (5*(temp_farenheit-32))/9;

    printf("Após a conversão, a temperatura em ºC é: %.2f",temp_celsius);


    return 0;
}
