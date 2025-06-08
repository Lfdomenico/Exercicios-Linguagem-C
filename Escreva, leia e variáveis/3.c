/*
Luiz Fernando Moreira Domênico

3. Faça um algoritmo que concatene as seguintes mensagens em uma só:
 o “Olá, amigo! ”
 o “Este texto tem uma vírgula dentro das aspas. ”
 o “Mas eu sei que quando está dentro das aspas ela representa apenas
 uma vírgula. ”
 o “E quando está fora representa o operador de concatenação.”
*/

#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");

    char str1[100];
    char str2[100];
    char str3[100];
    char str4[100];
    char cat[100];


    sprintf(str1,"Olá, amigo! ");
    sprintf(str2,"Este texto tem uma vírgula dento das aspas. ");
    sprintf(str3, "Mas eu sei que quando está dentro das aspas ela representa apenas uma vírgula. ");
    sprintf(str4, "E quando está fora representa o operador de concatenação.");

    sprintf(cat,"%s %s %s %s",str1, str2, str3, str4);

    puts(cat);



    return 0;
}
