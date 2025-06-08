/*
Luiz Fernando Moreira Domênico

6. Faça um algoritmo que peça uma nota N1 e, em seguida, uma nota N2. O
algoritmo deve calcular a média das duas notas e apresentar a mensagem
“Aprovado”, caso o resultado seja maior ou igual a 6; ou “Reprovado”, caso
o resultado seja inferior a 6.
 
*/

#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"PORTUGUESE");
    float nota1, nota2, media;

    printf("Digite 1a nota: ");
    scanf("%f",&nota1);
    printf("Digite 2a nota: ");
    scanf("%f",&nota2);
    printf("\n");

    media = (nota1 + nota2)/2;

    if(media >= 6.0){
        printf("Média = %.2f. \nAPROVADO.",media);
    }else{
        printf("Média = %.2f. \nREPROVADO.",media);
    }

    return 0;
}
