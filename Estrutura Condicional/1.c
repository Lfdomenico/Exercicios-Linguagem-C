/* 
Luiz Fernando Moreira Domênico

1. Faça um algoritmo que peça o salário de um funcionário. Se o salário for
maior do que R$ 10.000, o programa deverá apresentar a mensagem “você
ganha bem!”

*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    float salario;

    printf("Informe o salário do funcionário (R$): ");
    scanf("%f",&salario);

    if(salario > 10000){
        printf("\n");
        printf("Você ganha bem!");
    }

    return 0;
}
