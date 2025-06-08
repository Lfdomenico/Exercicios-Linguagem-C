/* 
Luiz Fernando Moreira Domênico

3. Faça um algoritmo que peça a temperatura corporal do usuário. Se a
temperatura for menor que 37, apresentar a mensagem “você está sem
febre”. Do contrário, apresentar a mensagem “você está com febre!”.

*/

#include<stdio.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL,"PORTUGUESE");
    float temp_corporal;

    printf("Informe sua temperatura corporal: ");
    scanf("%f",&temp_corporal);

    if(temp_corporal < 37){
        printf("Você está sem febre.");
    }else{
        printf("Você está com febre.");
    }

    return 0;
}
