#include <stdio.h>

int main (){
 int idade = 18;
 float altura = 1.52;
 char opcao = 'L';
 char nome [7] = "lorenna";
//sintaxe scant
//scanf("formato1", formato2, &variavel1, variavel2, ...);

printf("Digite a sua idade: ");
scanf("%d", &idade);
printf("A idade é: %d\n", &idade);

printf("Digite a sua altura:");
scanf("%f",&altura);
printf("A altura é: %f\n", &altura);

printf("Digite seu nome: ");
scanf("%s", &nome);
printf("O nome é: %s", &nome);
/*
printf("%formatol1, %formatol2, %formatol3", variavel1, variavel2, variavel3)

%d: Imprime um inteiro no formato decimal.
&i: Equivalente a %d
%f: Imprime um numero de ponto flutuante no formato padrão.
%e: Imprime em notação científica (ex: 1.52e+00).
%c: Imprime um único caractere (char).
%s: Imprime uma cadeia de caracteres (string/texto).
%u: Imprime um inteiro sem sinal (positivo).
*/
}