/**
 * Quarto programa: fazer um programa que peça dois números ao usuário e mostre
 * a soma (+), a subtração (-), a multiplicação (*) e a divisão (/) desses números;
 **/ 

#include <stdio.h>

int main(){
int soma1 = 1;
int soma2 = 2;
int subtrai1 = 5;
int subtrai2 = 3;
int multiplica1 = 1;
int multiplica2 = 2;
int divide1 = 4;
int divide2 = 2;

printf("Por favor, digite um numero: ");
scanf("%d", &soma1);
printf("Por favor digite outro numero: ");
scanf("%d", &soma2);
printf("A soma dos numeros é: %d\n", soma1+soma2);


printf("Por favor, digite um numero: ");
scanf("%d", &subtrai1);
printf("Por favor, digite outro numero: ");
scanf("%d", &subtrai2);
printf("A subtração dos numeros é: %d\n", subtrai1-subtrai2);

printf("Por favor, digite um numero: ");
scanf("%d", &multiplica1);
printf("Por favor, digite outro numero: ");
scanf("%d", &multiplica2);
printf("A multiplicação dos numeros é: %d\n", multiplica1*multiplica2);


printf("Por favor, digite um numero: ");
scanf("%d", &divide1);
printf("Por favor, digite outro numero: ");
scanf("%d", &divide2);
printf("A divisão dos numeros é: %d\n", divide1/divide2);
}
