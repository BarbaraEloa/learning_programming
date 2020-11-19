/**
 * IMC = peso / (altura*altura)
 * IMC abaixo de 18.5 => Abaixo do peso
 * IMC entre 18.5 e 25 => Peso normal
 * IMC entre 25 e 30 => Acima do peso
 * IMC acima de 30 => Obeso
 * 
 * Faça um programa que leia peso e altura de uma pessoa e diga a condição da pessoa
 **/
#include <stdio.h>

int main(){
float peso = 62;
float altura = 153;
float IMC;

printf("Digite seu peso: ");
scanf("%f", &peso);
printf("Digite sua altura:");
scanf("%f", &altura);

IMC = peso/(altura*altura);

if(IMC <= 18.5){
printf("IMC abaixo do peso");
}

if(IMC > 18.5 && IMC <= 25){
printf("IMC normal");
}else if(IMC > 25 && IMC <= 30){
printf("Acima do peso");
}else if(IMC > 30){
printf("Obeso");
}
}