/*
  2. Faça um algoritmo que apresente os valores de 10 a 1.
*/

#include<stdio.h>

int main(){

    int i;

    for(i = 10; i >= 1; --i){
        printf("| %d | ",i);
    }
    return 0;
}
