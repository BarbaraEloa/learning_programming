/**
 * Numa turma o professor definiu 3 provas e 1 trabalho, sendo que a primeira prova tem peso 1 a segunda prova tem peso 2 
 * e a terceira prova peso 2 e o trabalho tem peso 5.
 * M = (nota1 + nota2*2 + nota3*2 + trabalho*5)/10
 * 
 * Se M for menor que 4 => Reprovado
 * Se M for entre 4 e 6 => Prova final
 * Se M for maior que 6 => Aprovado
 * 
 * Faça um programa que leia as notas das provas e do trabalho de um aluno e diga se ele está reprovado, aprovado ou
 * de prova final.
 **/

#include <stdio.h>

int main(){
float prova1 = 7;
float prova2 = 6;
float prova3 = 8;
float trabalho = 8;
float media;

printf("Digite a nota da prova 1: ");
scanf("%f", &prova1);
printf("Digite a nota da prova 2: ");
scanf("%f", &prova2);
printf("Digite a nota da prova 3: ");
scanf("%f", &prova3);
printf("Digite a nota do trabalho: ");
scanf("%f", &trabalho);

media = (prova1 + prova2*2 + prova3*2 + trabalho*5)/10;

if(media < 4){
printf("Reprovado\n");
} else if(media >= 4 && media <= 6){
printf("Prova final\n");
} else if(media >= 6){
printf ("Aprovado\n");
}
}