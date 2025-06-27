/*
  10 - Fa�a um algoritmo que pe�a um n�mero inicial e um n�mero final. Em
seguida, deve ser apresentada a contagem do n�mero inicial ao n�mero final. Se o
n�mero inicial for menor que o final, ent�o a contagem ser� em ordem crescente.
Do contr�rio, a contagem dever� ser em ordem decrescente. Portanto, se o usu�rio
digitar primeiro 2, depois 5, dever� ser apresentado: 2, 3, 4 e 5. Mas se o usu�rio
digitar primeiro 5, depois 2, dever� ser apresentado: 5, 4, 3, 2 e 1.
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    int i, num_inicial, num_final;

    printf("Informe um n�mero inicial: ");
    scanf("%d",&num_inicial);

    printf("Informe um n�mero final: ");
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
