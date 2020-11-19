/**
 * Faça um programa que diga se um número é divisível por 3 e 7.
 **/

#include <stdio.h>
int main(){
int A = 3;
int divisao;

printf("Digite um numero A: ");
scanf("%d", &A);

divisao = A % 3 == 0 && A % 7 == 0;

if(divisao){
printf("E divisivel");
}
}