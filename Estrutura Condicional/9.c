/*
Luiz Fernando Moreira Domênico

9. Em uma indústria de parafusos, um algoritmo determina se a produção
está boa ou ruim. Uma produção é ruim quando o número de parafusos
com defeito for maior do que 10% do total produzido. Faça um algoritmo
que peça o número total de parafusos produzidos e, em seguida, peça o
número de parafusos com defeito. O algoritmo, então, deve calcular o limite
de peças com defeito permitidas (com base no total de peças produzidas e
a porcentagem limite) e apresentar se a produção está boa ou ruim.
 
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int total, defeituosos, limite;

    printf("Informe o número total de parafusos produzidos: ");
    scanf("%d", &total);

    printf("Informe o número de parafusos defeituosos: ");
    scanf("%d",&defeituosos);


    limite = total * 0.10;

    if(limite > defeituosos){
        printf("A produção está boa.");
    }else{
        printf("A produção está ruim.");
       }

    return 0;
}
