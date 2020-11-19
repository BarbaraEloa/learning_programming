/**
 * Faça um programa que lê um número e diga se ele é par ou ímpar:
 * 
 * n % 2 == 0 => par
 * n % 2 != 0 => ímpar
 * 
 * % é o operador que dá o resto de uma divisão
 *
 **/


#include <stdio.h>

int main(){
    int A = 0;

    printf("Digite um numero: ");
    scanf("%d", &A);
 
    if(A % 2 == 0){
    printf("O resultado é par\n");
    } else{
    printf("O resultado é ímpar\n");
    }
    }
