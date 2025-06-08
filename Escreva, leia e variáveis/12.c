/*
Luiz Fernando Moreira Domênico

12. Faça um algoritmo que peça um valor inteiro (e o armazene em uma
variável de nome a). Peça um segundo valor inteiro (e o armazene em uma
variável de nome b). E, troque o valor da variável a por b e vice-versa. Por
exemplo, se o usuário digitar primeiro 2, depois 6 (a=2 e b=6), no fim do
algoritmo, o valor de a deverá ser 6 e o de b deverá ser 2. Por fim, apresentar
os resultados para o usuário.
*/

#include<stdio.h>

int main(){

    int a, b, auxiliar;

    printf("Informe o primeiro valor (a): ");
    scanf("%i",&a);
    printf("Informe o segundo valor (b): ");
    scanf("%i",&b);

    auxiliar = a;
    a = b;
    b = auxiliar;

    printf("Valores alterados\n");
    printf("a -> %i   b -> %i", a,b);

    return 0;
}
