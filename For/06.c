/*
  6 - Faça um algoritmo que apresente os valores ímpares de 1 a 10
*/

#include<stdio.h>

int main(){

    int i;

    for(i=1;i<=10;i = i+2){
        printf("| %d |",i);
    }

    return 0;
}
