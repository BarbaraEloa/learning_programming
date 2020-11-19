/**
 * Faça um programa que lê a idade da pessoa e diga se a pessoa está elegível para votar.
 * 
 * Abaixo de 16 => Não é elegível
 * Entre 18 e 65 => Voto obrigatório
 * Entre 16 e 18 ou maior que 65 => Facultativo
 **/

#include <stdio.h>
int main(){
int Idade = 1;

printf("Digite aqui sua idade: ");
scanf("%d", &Idade);

if(Idade < 16){
printf("Não esta elegivel");
}

if(Idade >= 18 && Idade < 65){
printf("O voto é obrigatório");
}

if(Idade >= 16 && Idade < 18 || Idade >= 65){
printf("Voto é facultativo");
}
}