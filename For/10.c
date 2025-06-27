/*
  10 - Faça um algoritmo que peça um número inicial e um número final. Em
seguida, deve ser apresentada a contagem do número inicial ao número final. Se o
número inicial for menor que o final, então a contagem será em ordem crescente.
Do contrário, a contagem deverá ser em ordem decrescente. Portanto, se o usuário
digitar primeiro 2, depois 5, deverá ser apresentado: 2, 3, 4 e 5. Mas se o usuário
digitar primeiro 5, depois 2, deverá ser apresentado: 5, 4, 3, 2 e 1.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int i, num_inicial, num_final;

    printf("Informe um número inicial: ");
    scanf("%d",&num_inicial);

    printf("Informe um número final: ");
    scanf("%d",&num_final);

    if(num_inicial > num_final){
        for(i=num_inicial; i >= num_final;--i){
            printf(" |%d| ", i);
        }
    }else{
        for(i=num_inicial;i<=num_final;++i){
            printf(" |%d| ",i);
        }
    }

    return 0;
}
