#include <stdio.h>

int main(){
int A = 10;
float B = 5;  
float Resultado = 2;

printf("Por favor digite A: ");
scanf("%d", &A);

printf("Por favor digite B: ");
scanf("%f", &B);   

if (B == 0){
printf ("Não existe divisão por zero");

} else {
    Resultado = A/B;
    printf("A divisão de A e B é: %f\n", Resultado);
}

}