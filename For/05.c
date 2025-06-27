/*
  5 - Faça um algoritmo que apresente os valores pares de 1 a 10.
*/

#include<stdio.h>

int main(){

    int i;

    printf("Apenas valores pares");
    printf("\n");
    for(i=1;i<=10;++i){
        if(i%2 == 0){
            printf("| %d |",i);
        }
    }

    return 0;
}
