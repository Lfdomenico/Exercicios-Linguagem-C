/* 
Luiz Fernando Moreira Domênico

2. Faça um algoritmo que peça o salário de um funcionário. Se o salário for
menor do que R$ 1.045, o algoritmo deve apresentar a mensagem “você
ganha menos do que um salário mínimo”. Do contrário, o algoritmo deve
apresentar a mensagem “você ganha pelo menos um salário mínimo".accumulate

*/
 
#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float salario;

    printf("Informe o salário do funcionário: ");
    scanf("%f",&salario);
    printf("\n");
    if(salario < 1045){
        printf("Você ganha menos do que um salário mínimo.");
    }else{
        printf("Você ganha pelo menos um salário mínimo.");
    }


    return 0;
}
